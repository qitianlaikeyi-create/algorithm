#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

int main(){
    string s;cin>>s;
    int k;cin>>k;
    string ans;
    stack<int>st;
    int num=0;
    for(int i=0;i<s.size();i++){
        while(!st.empty()&&s[st.top()]>s[i]){
            if(num<k){
                num++;
            }else break;
            st.pop();
        }
        st.push(i);
    }
    if(num<k){
        while(!st.empty()&&num!=k){
            st.pop();
            num++;
        }
    }
    while(!st.empty()){
        ans+=s[st.top()];
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    int pos=0;
while(pos<ans.size() && ans[pos]=='0'){
    pos++;
}
ans=ans.substr(pos);
if(ans.empty()) ans="0";
    cout<<ans;
    return 0;
}
