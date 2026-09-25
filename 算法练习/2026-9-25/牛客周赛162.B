#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m, x, y;
        cin >>n>>m>>x>>y;
        int ans=0;
        if(x>1&&y>1){
            ans+=2*((x-1)+(y-1));
        }
        if(x>1&&y<m){
            ans+=2*((x-1)+(m-y));
        }
        if(x<n&&y>1){
            ans+=2*((n-x)+(y-1));
        }
        if(x<n&&y<m){
            ans+=2*((n-x)+(m-y));
        }
        cout<<ans<<endl;
    }

    return 0;
}