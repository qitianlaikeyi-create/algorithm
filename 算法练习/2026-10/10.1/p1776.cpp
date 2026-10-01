#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,w;cin>>n>>w;
    int pos=0;
    ll a[5000];//重量
    ll b[5000];//价值
    for(int i=1;i<=n;i++){
        ll v,x,m;cin>>v>>x>>m;
        ll t=1;
        while(m>=t){
            pos++;
            a[pos]=t*x;
            b[pos]=t*v;
            m-=t;
            t*=2;
        }
        if(m){
            pos++;
            a[pos]=m*x;
            b[pos]=m*v;
        }
    }
    //把所有种类，每种所包含的数量，用二进制给拆分成堆
    //相当于是01背包问题
    ll f[40005]={0};
    for(int i=1;i<=pos;i++){
        for(int j=w;j>=a[i];j--){
            f[j]=max(f[j],f[j-a[i]]+b[i]);
        }
    }
    cout<<f[w];
    return 0;
}