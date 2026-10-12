class Solution {
public:
    string resultingString(string s) {
        int len=s.size();
        string ans;
        for(int i=0;i<len;i++){
            if((s[i]=='a'||s[i]=='z')&&ans.size()){
                if(abs(s[i]-ans.back())==25||abs(s[i]-ans.back())==1)
                ans.pop_back();
                else ans+=s[i];
            }
            else if(ans.size()){
                if(abs(s[i]-ans.back())==1)ans.pop_back();
                else ans+=s[i];
            }
            else ans+=s[i];
        }
        return ans;
    }
};