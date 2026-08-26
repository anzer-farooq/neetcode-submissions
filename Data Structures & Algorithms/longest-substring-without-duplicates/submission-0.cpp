class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int high=0;
        int low=0;
        int n=s.size();
        int count=0;
        unordered_map<char,int> f;
        while(high<n){
            f[s[high]]++;
            //
            while(f[s[high]]>1){
                f[s[low]]--;
                low++;
            }
            count=max(count,high-low+1);
            high++;
        }
        return count;
    }
};
