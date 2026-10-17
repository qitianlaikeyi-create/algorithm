class Solution {
public:
    int scoreOfParentheses(string s) {
        int len=s.size();
        int ans=0,depth=0;
        for(int i=0;i<len;i++){
            if(s[i]=='('){
                depth++;
            }
            else if(s[i]==')'){
                depth--;
                if(s[i-1]=='('){
                    ans+=1<<depth;
                }
            }
        }
        return ans;
    }
};