class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto s:strs){
            string temp=s;
            sort(s.begin(),s.end());
            mp[s].push_back(temp);
        }
        vector<vector<string>> res;
        for(auto &p:mp){
            res.push_back(p.second);
        }
        return res;
    }
};
