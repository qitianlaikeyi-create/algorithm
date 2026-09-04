//https://www.luogu.com.cn/problem/P1095

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+100;
ll dp1[N]={0};
ll dp2[N]={0};
int main(){
    ll  m,s,t;
    cin>>m>>s>>t;
    for(int i=1;i<=t;i++){
        if(m>=10){
            dp2[i]=dp2[i-1]+60;
            dp1[i]=max(dp1[i-1]+17,dp2[i]);
            m-=10;
        }
        else {
            m+=4;
            dp2[i]=dp2[i-1];
            dp1[i]=dp1[i-1]+17;
        }
        if(dp1[i]>=s){
            cout<<"Yes"<<endl;
            cout<<i;
            return 0;
        }
    }
    cout<<"No"<<endl;
    cout<<dp1[t];
    return 0;
}