class Solution {
public:
    bool isValid(string s) {
        bool ans=1;
        unordered_map<char,int>mp{{'(',1},{'{',2},{'[',3},{')',4},{'}',5},{']',6}};
        stack<char>st;
        for(auto t:s){
            
            if(mp[t]>=1&&mp[t]<=3){
                st.push(t);
            }
            else if(!st.empty()&&mp[st.top()]==mp[t]-3){
                st.pop();
            }
            else{ans=0;break;}
        }
         if(!st.empty()){ans=0;}
            
            return ans;
    }
};