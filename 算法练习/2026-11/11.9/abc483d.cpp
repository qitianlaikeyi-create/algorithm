#include<bits/stdc++.h>
using namespace std;
using ll= long long;
const int N=2e5+100;
int main(){
    int n;cin>>n;
    vector<ll>a(n+1);
    vector<ll>sum(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    vector<ll>mi(n+1);
    vector<ll>ma(n+2);
    ma[n]=sum[n];
    mi[n]=sum[n];
    for(int i=n-1;i>=0;i--){
        ma[i]=max(ma[i+1],sum[i]);
        mi[i]=min(mi[i+1],sum[i]);
    }
    ll ans=0;
    ans=ma[0]-mi[0]+1;
    ll curmi=0,curma=0;
    for(int i=1;i<=n;i++){
        ll mx=max(curma,ma[i]-2*a[i]);
        ll mn=min(curmi,mi[i]-2*a[i]);
        ans=max(ans,mx-mn+1);
        curmi=min(curmi,sum[i]);
        curma=max(curma,sum[i]);
    }
    cout<<ans;
    return 0;
}

 