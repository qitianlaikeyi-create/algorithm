#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m;cin>>n>>m;
    int p[10000],a[10000];
    map<ll,ll>mp;
    for(int i=1;i<=m;i++){
        cin>>p[i]>>a[i];
        mp[p[i]]+=a[i];
    }
    ll zh=0,sheng=0,ans=0,ans1=0;
    ll need=n;
   for(auto x:mp){
    zh=x.second;
    ans1=x.first;
    ll buy=min(need,zh);
    ans+=buy*ans1;
    need-=buy;
    if(need==0)break;
    }
    cout<<ans;
    return 0;
}