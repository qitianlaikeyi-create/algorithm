
//https://www.luogu.com.cn/problem/P8218

//一维前缀和

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+100;
int main(){
    int n;cin>>n;
    vector<ll>a(N);
    vector<ll>b(N);
for(int i=1;i<=n;i++){
    cin>>a[i];
    b[i]=b[i-1]+a[i];
}
 ll m;cin>>m;
    for(int i=1;i<=m;i++){
       ll l,r;cin>>l>>r;
       ll ans=0;
        ans=b[r]-b[l-1];
         cout<<ans<<endl;
    }
    return 0;
}