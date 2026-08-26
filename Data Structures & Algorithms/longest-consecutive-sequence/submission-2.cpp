class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
       if(n==0){
        return 0;
       }
       int longest=1;
       unordered_set<int> st;
       for(int i=0;i<n;i++){
        st.insert(nums[i]);
       }
       for(auto it:st){
        if(st.find(it-1)==st.end()){//means agr it-1 nhi miLa
        int count=1;
        int x=it;
        while(st.find(x+1)!=st.end()){//jb tk consecutive elements milty jayingy tb tk ye loop runs
            x=x+1;
            count+=1;
        }
        longest=max(count,longest);
        }
       }
       return longest;
        
    }
};
