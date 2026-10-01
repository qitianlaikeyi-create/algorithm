#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e4+100;
const int M=1e7+100;
ll f[N][M];
int main(){
    int t,m;cin>>t>>m;
    vector<int>a(m+1);
    vector<int>b(m+1);
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=t;j++){
            f[i][j]=f[i-1][j];
            if(j>=a[i])
            f[i][j]=max(f[i][j],f[i][j-a[i]]+b[i]);
        }
    }
    cout<<f[m][t];
    return 0;
}