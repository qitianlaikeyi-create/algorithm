class Solution {
public:
    string mergeCharacters(string s, int k) {
        bool f[26]={0};
        unordered_map<int,int>mp;
        string st;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(f[s[i]-'a']&&st.size()-mp[s[i]-'a']<=k){
                continue;
            }
            else{
                st+=s[i];
                mp[s[i]-'a']=st.size()-1;
                f[s[i]-'a']=1;
            }
        }
        return st;
    }
};