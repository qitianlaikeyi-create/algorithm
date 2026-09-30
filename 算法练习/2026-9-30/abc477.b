#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+100;
int main() {
    int n,d;cin>>n>>d;
    vector<int>a(n+1,0);
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    vector<int>b;
    sort(a.begin()+1,a.begin()+1+n);
    if(a[2]-a[1]>=d)b.push_back(a[1]);
    if(a[n]-a[n-1]>=d)b.push_back(a[n]);
    for(int i=2;i<n;i++){
         if(a[i+1]-a[i]>=d&&a[i]-a[i-1]>=d){
            b.push_back(a[i]);
        }
    }
    cout<<b.size()<<endl;
    vector<int>ans;
    for(auto x:b){
        ans.push_back(mp[x]);
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}