class Solution {
public:
    string removeStars(string s) {
        int len=s.size();
        string ans;
        stack<char>st;
        for(int i=0;i<len;i++){
            if(s[i]=='*'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};