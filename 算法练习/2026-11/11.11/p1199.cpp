#include<bits/stdc++.h>
using namespace std;
using ll= long long;
const int N=3e4+100;
int main(){
    int n;cin>>n;
    int a[505][505];
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int x;cin>>x;
            a[i][j]=x;
            a[j][i]=x;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        sort(a[i]+1,a[i]+1+n);
        ans=max(ans,a[i][n-1]);
    }
    cout<<1<<endl<<ans;
    return 0;
}
