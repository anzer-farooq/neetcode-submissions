class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                // Added parenthesis to group the OR conditions together safely
                if(st.size()!=0 && ((st.top()=='(' && s[i]==')')||(st.top()=='[' && s[i]==']')||(st.top()=='{'&&s[i]=='}')) ){
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        } // Closed the for-loop here
        return st.empty(); // Moved the final return outside of the loop
    }
};
