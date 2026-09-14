
//https://ac.nowcoder.com/acm/contest/140235/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+100;
int main(){
    /*ll n,k;cin>>n>>k;
    ll a[N];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n,[](ll x,ll y){
      ll sum1=__builtin_popcount(x);//统计二进制中一的个数
      ll sum2=__builtin_popcount(y);
      if(sum1!=sum2){
        return sum1<sum2;
      }  
      ll ans1=(x==0?31:__builtin_ctz(x));//统计二进制中最后连续有几个零（也可以说成是第一个1出现的位置（要加1））
      ll ans2=(y==0?31:__builtin_ctz(y));
      if(ans1!=ans2){
        return ans1<ans2;
      }
      return x<y;
    });

    cout<<a[k];
    */
   ll n,k;cin>>n>>k;
   ll a[N];
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   sort(a+1,a+1+n,[](ll x,ll y){
    ll sum1=0,sum2=0,ans1=-1,ans2=-1;
    for(int i=0;i<=31;i++){
        if(x&(1<<i)){
            sum1++;
            ans1=ans1==-1?i:ans1;
        }
        if(y&(1<<i)){
            sum2++;
            ans2=ans2==-1?i:ans2;
        }
    }
    if(sum1!=sum2){
        return sum1<sum2;
    }
    if(ans1!=ans2){
        return ans1<ans2;
    }
    return x<y;
   });
   cout<<a[k];
    return 0;
}




