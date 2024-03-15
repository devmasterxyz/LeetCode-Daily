class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        bool f=1;
        int cnt=0;
        for(auto it:nums) {
            if(it!=0)
            product*=it;
            else {
                cnt++;
                f=0;
            }
        }
        cout<<f<<" ";
        for(int i=0;i<nums.size();i++) {
            if(nums[i]!=0){
            if(!f) {
                nums[i]=0;
            }
            else {
                nums[i]=product/nums[i];
            }}
            else {
                if(cnt>1) {
                    nums[i]=0;
                }
                else {
                    nums[i] = product;
                }
            }
        }
        return nums;
    }
};