//牛课周赛180 C
//https://ac.nowcoder.com/acm/contest/139989/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int t;cin>>t;
   for(int i=1;i<=t;i++){
    ll x;cin>>x;
    ll r=sqrt(x);
    if(r*r>x)r=r-1;
    if((r+1)*(r+1)<=x)r=r+1;
    ll ans=0;
    ans=x-r*r;
    ll ans1=0;
    ans1=(r+1)*(r+1)-x;
    cout<<r<<" "<<ans<<" "<<ans1<<endl;
   }
    return 0;
}