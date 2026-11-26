#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+100;
int a[1005]={0};
ll pre[1005]={0};
int n,c;
ll ans=0;
void dfs(ll x,int y){
    if(x>c)return ;
    ans=max(ans,x);
    if(x+pre[y-1]<=c){
        ans=max(ans,x+pre[y-1]);
        return ;
    }
    for(int i=y-1;i>=1;i--){
        if(x+a[i]<=c){
            dfs(x+a[i],i);
        }
    }
}
int main(){
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
    }
    dfs(0,n+1);
    cout<<ans;
    return 0;
 }