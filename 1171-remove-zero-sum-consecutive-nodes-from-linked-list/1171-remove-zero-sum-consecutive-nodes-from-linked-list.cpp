/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int,ListNode*> m;
        int sum=0;
        ListNode* res = new ListNode(0,head);
        ListNode* temp = res;
        while(temp) {
            sum+=temp->val;
            m[sum] = temp;
            temp=temp->next;
        }
        sum=0;
        temp=res;
        while(temp) {
            sum+=temp->val;
            temp->next = m[sum]->next;
            temp=temp->next;
        }
        return res->next;
    }
};