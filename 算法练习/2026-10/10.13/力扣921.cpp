class Solution {
public:
    int minAddToMakeValid(string s) {
        int len=s.size();
        int ans=0;
        int l=0;
        for(int i=0;i<len;i++){
          if(s[i]=='('){
            l++;
          }
          if(s[i]==')'){
            if(l>0){
                l--;
            }else if(l==0){
                ans++;
            }
          }
        }
        return ans+l;
    }
};