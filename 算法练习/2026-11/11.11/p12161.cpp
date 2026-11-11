#include<bits/stdc++.h>
using namespace std;
using ll= long long;
const int N=1e5+100;
int main(){
    int n;cin>>n;
    vector<int>a(n+1);
    ll sum=0;
    vector<pair<int,int>>b(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]={a[i],i};
        sum+=i;
    }

    ll ans=0;
    sort(b.begin()+1,b.end(),[&](auto u,auto v){
        return u.first>v.first;
    });
    for(int i=1;i<=n;i++){
        sum-=b[i].second;
        ans=max(ans,sum-b[i].second);
    }
    cout<<ans;
    return 0;
}