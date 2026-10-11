#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+100;
int main(){
    int n;cin>>n;
    int q;cin>>q;
    vector<vector<pair<int,int>>>a(q+1);
    while(q--){
        int l,r,x;cin>>l>>r>>x;
        a[x].push_back({l,r});
    }
    vector<int>diff(n+2,0);
    for(auto &x:a){
        sort(x.begin(),x.end());
        int L=-1,R=-1;
        for(auto &[l,r]:x){
            if(L==-1){
                L=l;
                R=r;
            }
            else if(l<=R+1){
                R=max(r,R);
            }
            else {
                diff[L]++;
                diff[R+1]--;
                L=l;
                R=r;
            }
        }
        if(L!=-1){
                diff[L]++;
                diff[R+1]--;
            }
    }
    int ans=0;
        for(int i=1;i<=n;i++){
            ans+=diff[i];
            cout<<ans<<" ";
        }
    return 0;
}