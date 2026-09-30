#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m;cin>>t>>m;
    int f[1005][1005];
    vector<int>a(m+1);
    vector<int>b(m+1);
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];
    }
    memset(f,0,sizeof(f));
    //f[i][j]只考虑前i个药
    //在时间不超过j的情况下，能获得的最大价值
    for(int i=1;i<=m;i++){
        for(int j=1;j<=t;j++){
          f[i][j]=f[i-1][j];
          if(j>=a[i]){
            f[i][j]=max(f[i][j],f[i-1][j-a[i]]+b[i]);
          }  
        }  
    }
    cout<<f[m][t];
    return 0;
}