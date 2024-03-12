class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool f=0;
        int ind2=-1;
        for(int i=nums.size()-1;i>=0;i--) {
            int minm =INT_MAX,ind=-1;
            for(int j=i+1;j<nums.size();j++) {
                if(nums[j]>nums[i] && nums[j] != minm) {
                    minm=min(minm,nums[j]);
                    ind=j;
                }
            }
            if(ind!=-1) {
                ind2=i;
                f=1;
                int temp = nums[i];
                nums[i] = minm;
                nums[ind] = temp;
                break;
            }
        }
        if(!f) {
            sort(nums.begin(),nums.end());
        }
        else {
            sort(nums.begin()+ind2+1,nums.end());
        }
    }
};