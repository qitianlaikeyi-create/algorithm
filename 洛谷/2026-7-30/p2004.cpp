//https://www.luogu.com.cn/problem/P2004

//二维前缀和 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1005;
const ll M=-1e18;
int a[N][N],b[N][N];
ll ans=M;
int main(){
   ll n,m,c;cin>>n>>m>>c;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
       int x;cin>>x;
        b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+x;
    }
   }
    int ansx=0,ansy=0;
   for(int i=1;i<=n-c+1;i++){
    for(int j=1;j<=m-c+1;j++){
        int x1=i,y1=j;
        int x2=i+c-1,y2=j+c-1;
       ll  sum= b[x2][y2]-b[x1-1][y2]-b[x2][y1-1]+b[x1-1][y1-1];
        if(sum>ans){
            ans=sum;
            ansx=x1;ansy=y1;
        }
    }
   }
    cout<<ansx<<" "<<ansy;
    return 0;
}