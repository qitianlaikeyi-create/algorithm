
//https://www.luogu.com.cn/problem/P2440

//二分

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e8+100;
int main(){
  ll n,k;cin>>n>>k;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin()+1,a.begin()+1+n);
    ll l=0,r=a[n];
    ll sum=0;
    while(l<r){
        ll mid=(l+r+1)/2;
         ll ans=0;
        for(int i=1;i<=n;i++){
            ans+=a[i]/mid;
        }
        if(ans<k)r=mid-1;
        else if(ans>=k){
            sum=mid;
            l=mid;
        }
    }
    cout<<sum;
    return 0;
   }