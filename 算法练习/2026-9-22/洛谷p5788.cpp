#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<int>a(n+1);
    vector<int>ans(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    stack<int>st;
    for(int i=1;i<=n;i++){
        while(!st.empty()&&a[st.top()]<a[i]){
            ans[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    for(int i=1;i<=n;i++){
       cout<<ans[i]<<" ";
    }
    return 0;
}