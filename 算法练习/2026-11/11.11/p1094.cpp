#include<bits/stdc++.h>
using namespace std;
using ll= long long;
const int N=3e4+100;
int main(){
    int w;cin>>w;
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin()+1,a.end());
    int l=1,r=n;
    int ans=0;
    while(l<=r){
        if(a[l]+a[r]<=w){
            l++;
            r--;
            ans++;
        }
        else{
            r--;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}

 