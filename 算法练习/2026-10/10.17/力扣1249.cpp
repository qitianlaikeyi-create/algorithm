class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int len=s.size();
        string ans;int l=0;
        for(int i=0;i<len;i++){
            ans+=s[i];
            if(s[i]=='('){
                l++;
            }
            else if(s[i]==')'){
                if(l>0){
                    l--;
                }else{
                    ans.pop_back();
                }
            }
        }
        stack<char>st;
            int sum=0;
            for(int i=ans.size()-1;i>=0;i--){
                st.push(ans[i]);
                if(st.top()=='('&&sum<l){
                    st.pop();
                    sum++;
                }
            }
        string ans1;
        while(!st.empty()){
            ans1.push_back(st.top());
            st.pop();
        }
        
        return ans1;
    }
};