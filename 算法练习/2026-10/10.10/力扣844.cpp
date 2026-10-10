class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int l1=s.size();
        int l2=t.size();
        stack<char>st1;
        stack<char>st2;
        for(int i=0;i<l1;i++){
            if(s[i]=='#'){
               if(!st1.empty()) st1.pop();
            }else st1.push(s[i]);
        }
        for(int i=0;i<l2;i++){
            if(t[i]=='#'){
                if(!st2.empty())
                st2.pop();
            } else st2.push(t[i]);
        }
        int ans1=st1.size(),ans2=st2.size();
        if(ans1!=ans2)return false;
        else{
            for(int i=0;i<ans1;i++){
                if(st1.top()!=st2.top()){
                    return false;
                }
                st1.pop();
                st2.pop();
            }
            return true;
        }
    }
};