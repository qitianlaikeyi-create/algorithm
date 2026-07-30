
//https://www.luogu.com.cn/problem/P1803

//贪心

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
struct node{
    ll  l,r;
   } a[N];
  bool cmp(node x,node y ){
    return x.r<y.r;
  }
int main(){
  ll n;cin>>n;
 for(int i=1;i<=n;i++){
    cin>>a[i].l>>a[i].r;
 }
  ll ans=0;
    sort(a+1,a+1+n,cmp);
    ll mi=0;
for(int i=1;i<=n;i++){
    if(a[i].l>=mi){
        ans++;
        mi=a[i].r;
    }
}
    cout<<ans;


    return 0;
}