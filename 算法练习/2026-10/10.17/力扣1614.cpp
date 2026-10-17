class Solution {
public:
    int maxDepth(string s) {
        int len=s.size();
        int l=0,r=0;
        int ans=0,sum=0;
        for(int i=0;i<len;i++){
            if(s[i]=='('){
                l++;
                ans=max(ans,l);
            }
            if(s[i]==')'){
                l--;
                }
            }
        
        return ans;
    }
};