class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans=0;
        for(char x='a';x<='z';x++){
            int i=s.find(x);
            if(i==string::npos){
                continue;
            }
            int j=s.rfind(x);
            bool ok[26]={0};
            for(int l=i+1;l<j;l++){
                if(!ok[s[l]-'a']){
                    ans++;
                    ok[s[l]-'a']=1;
                }
            }
        }
        return ans;
    }
};