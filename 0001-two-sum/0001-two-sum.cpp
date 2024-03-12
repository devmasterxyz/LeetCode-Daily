class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int curr_sum=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++) {
            for(int j=0;j<nums.size();j++) {
                if(i!=j &&nums[i]+nums[j]==target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};