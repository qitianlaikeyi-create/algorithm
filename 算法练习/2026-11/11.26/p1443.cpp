#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+100;
int a[405][405];
bool vis[405][405]={0};
int main(){
    int n,m,x,y;cin>>n>>m>>x>>y;
    memset(a,-1,sizeof(a));
    queue<pair<int,int>>q;
    q.push({x,y});
    a[x][y]=0;
    vis[x][y]=1;
    int dx[8]={-2,-2,-1,1,2,2,1,-1};
    int dy[8]={-1,1,2,2,1,-1,-2,-2};
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<1||nx>n||ny<1||ny>m)continue;
            if(vis[nx][ny])continue;
            vis[nx][ny]=1;
            a[nx][ny]=a[x][y]+1;
            q.push({nx,ny});
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){ 
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }