class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);//ans(n,1) creates dynamic array of n size with each element 1... [1,1,1,1]
        for(int i=1;i<nums.size();i++){
           ans[i]=ans[i-1]*nums[i-1];//1 1 2 8
        }
        int suffix=1;
        for(int i=nums.size()-2;i>=0;i--){
            suffix*=nums[i+1];
            ans[i]=ans[i]*suffix;
        }
        return ans;
    }
};
