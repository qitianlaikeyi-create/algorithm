//牛客周赛160 B
//https://ac.nowcoder.com/acm/contest/139989/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    while(t--){
        ll x,k;cin>>x>>k;
        int a[10],b[10];
        for(int i=1;i<=4;i++){
            a[i]=x%2;
            x=x/2;
        }
        ll s=k%4;
        if(s==0){
            for(int i=1;i<=4;i++)b[i]=a[i];
        }
        else{
        for(int i=1;i<=3;i++){
            if(i+s<=4)
            b[i+s]=a[i];
            else {
            b[i+s-4]=a[i];
            }
        }
        b[s]=a[4];
    }
    ll y=0;
    for(int i=1;i<=4;i++){
        y+=b[i]*(pow(2,i-1));
    }
    ll z=y;
    ll ans=0;
    for(int i=1;i<=4;i++){
        if(y%2==1)ans++;
        y=y/2;
    }
    cout<<z<<" "<<ans;
    cout<<endl;
}
    return 0;
}
