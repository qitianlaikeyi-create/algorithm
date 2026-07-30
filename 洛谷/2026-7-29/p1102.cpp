
//https://www.luogu.com.cn/problem/P1102

//map

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int main(){
    int n,c;cin>>n>>c;
    vector<ll>a(N);
    map<ll,ll>mp;
    ll ans=0;
    for(int i=1;i<=n;i++){cin>>a[i];
        mp[c+a[i]]++;
    }
    for(int i=1;i<=n;i++){
        ans+=mp[a[i]];
    }
    cout<<ans;
    return 0;
}