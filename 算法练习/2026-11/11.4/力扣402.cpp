class Solution {
public:
    string removeKdigits(string num, int k) {
        int len=num.size();
        stack<int>st;
        string ans;
        if(k==len){ans="0";return ans;}
        for(int i=0;i<len;i++){
            while(!st.empty()&&num[st.top()]>num[i]&&k>0){
                k--;
                st.pop();
            }
            st.push(i);
        }
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=num[st.top()];
            st.pop();
        }
        int pos=0;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='0')pos++;
            else break;
        }
        ans.erase(0,pos);
        if(ans.empty())ans="0";
        return ans;
    }
};