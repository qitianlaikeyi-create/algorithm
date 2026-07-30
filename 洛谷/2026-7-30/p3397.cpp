
//https://www.luogu.com.cn/problem/P3397

//二维差分

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans[1005][1005]={0};
     int b[1005][1005]={0};
int main(){
    int n,m;cin>>n>>m;
      int x1,y1,x2,y2;
    for(int i=1;i<=m;i++){
       cin>>x1>>y1>>x2>>y2;
                b[x1][y1]++;
                b[x1][y2+1]--;
                b[x2+1][y1]--;
                b[x2+1][y2+1]++;
            }
         for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                ans[i][j]=ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1]+b[i][j];
                cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}