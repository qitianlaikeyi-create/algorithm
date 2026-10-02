#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m;cin>>n>>m;
    ll dp[30005]={0};
    for(int i=1;i<=m;i++){
        int v,p;cin>>v>>p;
        for(int j=n;j>=v;j--){
            dp[j]=max(dp[j],dp[j-v]+v*p);
        }
    }
    cout<<dp[n];
    return 0;
}