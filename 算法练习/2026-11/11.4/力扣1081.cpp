class Solution {
public:
    string smallestSubsequence(string s) {
        int len=s.size();
        unordered_map<char,int>mp;
        unordered_map<char,int>vis;
        stack<int>st;
        string t;
        for(int i=0;i<len;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<len;i++){
            mp[s[i]]--;
            if(vis[s[i]])continue;
            while(!st.empty()&&s[st.top()]>s[i]&&mp[s[st.top()]]>0){
                vis[s[st.top()]]=0;
                st.pop();
            }
            st.push(i);
            vis[s[i]]=1;
        }
        while(!st.empty()){
            t+=s[st.top()];
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};