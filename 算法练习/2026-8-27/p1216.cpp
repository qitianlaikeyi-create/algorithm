//https://www.luogu.com.cn/problem/P1216

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1005][1005];
ll dp[1005][1005];
int main(){
    int r;cin>>r;
      ll ans=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
            }
        }
for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];

        }
    }
        for(int i=1;i<=r;i++){
            ans=max(dp[r][i],ans);
        }
        cout<<ans;
    return 0;
}