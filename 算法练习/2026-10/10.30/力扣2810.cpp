class Solution {
public:
    string finalString(string s) {
        string ans;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(ans.size()&&s[i]=='i'){
                reverse(ans.begin(),ans.end());
            }
            else{ans+=s[i];}
        }
        return ans;
    }
};