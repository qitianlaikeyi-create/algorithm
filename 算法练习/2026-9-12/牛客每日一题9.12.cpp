#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        if(k==1){
            cout<<1<<endl;
            continue;
        }
        while(n>0){
           ll digit=n%k;
            ans=max(ans,digit);
            n/=k;
        }
    cout<<ans<<endl;
    }
}
