class Solution {
public:
    int minInsertions(string s) {
        int len=s.size();
        int l=0,ans=0;
        for(int i=0;i<len;i++){
            if(s[i]=='('){
                l++;
            }
            else
            {
            if(l>0){l--;}
            else {ans++;}
            if(s[i+1]==')'&&i+1<len)i++;
            else ans++;        
            }
        }
        return ans+l*2;
    }
};