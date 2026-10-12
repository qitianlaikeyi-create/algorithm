class Solution {
public:
    string makeGood(string s) {
        int len=s.size();
        string ans;
        for(int i=0;i<len;i++){
            if(s[i]>='a'&&s[i]<='z'&&ans.size()){
                if(s[i]==ans.back()-'A'+'a')
                ans.pop_back();
                else ans+=s[i];
            }
            else if(s[i]>='A'&&s[i]<='Z'&&ans.size()){
                if(s[i]==ans.back()-'a'+'A'){
                    ans.pop_back();
                }
                else ans+=s[i];
            }
            else ans+=s[i];
        }
        return ans;
    }
};