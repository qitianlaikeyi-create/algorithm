#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+100;
int main(){
    ll x;cin>>x;
    ll ans=x;
    ll cur=0;
    while(x){
        cur+=(1-x%2);
        x/=2;
    }
    ans=ans-(ll)pow(2,cur)+1;
    cout<<ans;
    return 0;
}