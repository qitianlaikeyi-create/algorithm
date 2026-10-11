#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=300;
ll dp[4][N];
int main(){
    int n,v;cin>>n>>v;
    vector<ll>p(n+1);
    vector<ll>w(n+1);
    dp[0][v]=0;
    for(int i=1;i<=n;i++){
        p[i]=i;
        cin>>w[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=3;j>=1;j--){
            for(int k=v;k>=p[i];k--){
                dp[j][k]=max(dp[j][k],dp[j-1][k-p[i]]+w[i]);
            }
        }
    }
    cout<<dp[3][v];
    return 0;
}
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=300;
ll dp[4][N];
int main(){
    int n,v;cin>>n>>v;
    vector<ll>p(n+1);
    vector<ll>w(n+1);
    for(int i=1;i<=n;i++){
        p[i]=i;
        cin>>w[i];
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=1;k!=i&&k!=j;k++){
                if(i+j+k<=v){
                    ans=max(ans,w[i]+w[j]+w[k]);
                }
            }
        }
    }
    cout<<ans;
    return 0;
}