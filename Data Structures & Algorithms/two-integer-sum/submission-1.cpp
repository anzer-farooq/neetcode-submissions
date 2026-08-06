class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> h;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=target-nums[i];
            if(h.find(a)!=h.end()){//means a is present in hashmap
                return {h[a],i};
            }
            else{
                h[nums[i]]=i;
            }
        }
        return {};
        
    }
};