class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int curr_sum=0;
        int res=0;
        map<int,int> m;
        m[0]=-1;
        for(int i=0;i<nums.size();i++) {
            curr_sum+=(nums[i]==0)?-1:1;
            if(m.find(curr_sum)!=m.end()) res=max(res,i-m[curr_sum]);
            else m[curr_sum]=i;
        }
        return res;
    }
};