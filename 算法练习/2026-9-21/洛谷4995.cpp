#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin>>n;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll ans=0;
    sort(a.begin()+1,a.end());
    ans+=a[n]*a[n];
    int x=n/2;
    if(n&1){
        int x=n/2;
        int j=1;
        for(int i=n;i>x+1;i--){
            ans+=(a[i]-a[j])*(a[i]-a[j])+(a[i-1]-a[j])*(a[i-1]-a[j]);
            j++;
        }
        cout<<ans;
    }
    else {
        int x=n/2;
        int j=1;
        ans+=(a[x+1]-a[x])*(a[x+1]-a[x]);
        for(int i=n;i>x+1;i--){
            ans+=(a[i]-a[j])*(a[i]-a[j]);
            ans+=(a[i-1]-a[j])*(a[i-1]-a[j]);
            j++;
        }
        cout<<ans;
    }
    return 0;
}