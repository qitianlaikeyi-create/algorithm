//牛客周赛159 C
//https://ac.nowcoder.com/acm/contest/139660/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int m,q,b;cin>>m>>q>>b;
    ll ans=0,ans1=0;
    vector<ll>a(m+1);
    vector<ll>pre(m+1);
    vector<ll>sum(m+1);
    for(int i=1;i<=m;i++){
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
    }
    sum[1]=b;
    for(int i=2;i<=m;i++){
        if(i&1)sum[i]=b;
        else {
            if(b==0)sum[i]=1;
            else sum[i]=0;
        }
    }
    for(int i=1;i<=q;i++){
    ll p;cin>>p;
    auto it=lower_bound(pre.begin()+1,pre.end(),p);
    ans=it-pre.begin();
    ans1=p-pre[ans-1];
    
    cout<<sum[ans]<<" "<<ans<<" "<<ans1;
    cout<<endl;
    }
    return 0;
}
