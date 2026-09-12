//https://ac.nowcoder.com/acm/contest/139666/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e5+100;

int main(){
    int n;cin>>n;
    ll a[N];
     ll ans=0;
     ll ans1=0;
     ll cha1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==0)ans+=a[i];
    }
    for(int r=1;r<n;r+=2){
    cha1=max(cha1+a[r]-a[r-1],a[r]-a[r-1]); 
       ans1=max(ans1,cha1);
    }

    ll cha2=0;
    ll ans2=0;
    for(int i=1;i+1<n;i+=2){
        cha2=max(cha2+a[i]-a[i+1],a[i]-a[i+1]);
        ans2=max(cha2,ans2);
    }

    cout<<ans+max(ans1,ans2);
    return 0;
}