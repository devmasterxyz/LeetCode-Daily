class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res=0,curr_sum=0;
        unordered_map<int,int> m;
        for(auto it:nums) {
            curr_sum+=it;
        res+=m[curr_sum-goal];
            m[curr_sum]++;
        }
        res+=m[goal];
        return res;
    }
};