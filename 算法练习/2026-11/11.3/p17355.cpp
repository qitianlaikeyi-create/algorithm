#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;cin>>s;
    stack<int>st;
    int n=s.size();
    ll ans=0,num=0;num=(1LL)*n*(1+n)/2;
    vector<ll>l(n+1);
    vector<ll>r(n+1);
    
    for(int i=0;i<s.size();i++){
        while(!st.empty()&&s[st.top()]<=s[i]){
            st.pop();
        }
        l[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    while(!st.empty())st.pop();
    for(int i=s.size()-1;i>=0;i--){
        while(!st.empty()&&s[st.top()]<s[i]){
            st.pop();
        }
        r[i]=st.empty()?n:st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++){
        ans+=(s[i]-'0')*(i-l[i])*(r[i]-i);
    }
    ll g=gcd(ans,num);
    ans/=g;
    num/=g;
    if(num==1)cout<<ans;
    else if(ans<num){
        cout<<ans<<"/"<<num;
    }else {
        cout<<ans/num<<" "<<ans%num<<"/"<<num;
    }
    
    return 0;
}
