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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int cnt=0;
        while(temp && cnt!=a-1) {
            temp=temp->next;
            cnt++;
        }
        ListNode* g1 = temp;
        while(temp&&cnt!=b+1) {
            temp=temp->next;
            cnt++;
        }
        g1->next=list2;
        while(g1->next) {
            g1=g1->next;
        }
        g1->next=temp;
        return list1;
    }
};