class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto p:mp){
            bucket[p.second].push_back(p.first);
        }
        vector<int> ans;
        for(int i=nums.size();i>=0;i--){
            for(int num:bucket[i]){
            ans.push_back(num);
            }
            if(ans.size()==k){
                break;
            }
        }
        return ans;

    }
};
