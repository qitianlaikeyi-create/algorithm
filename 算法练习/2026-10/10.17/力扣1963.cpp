class Solution {
public:
    int minSwaps(string s) {
        int len=s.size();
        stack<char>st;
        for(int i=0;i<len;i++){
            if(s[i]==']'&&!st.empty()&&st.top()=='['){
                st.pop();
            }
            else st.push(s[i]);
        }
        int ans=0;
        ans=(st.size()/2+1)/2;
        return ans;
    }
};