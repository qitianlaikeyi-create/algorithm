#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+100;
bool vis[35][35]={0};
int main(){
    int n;cin>>n;
    int a[35][35]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    queue<pair<int,int>>q;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    for(int i=1;i<=n;i++){
        if(a[1][i]==0)q.push({1,i});
        if(a[n][i]==0)q.push({n,i});
        if(a[i][1]==0)q.push({i,1});
        if(a[i][n]==0)q.push({i,n});
    }
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        if(vis[x][y])continue;
        vis[x][y]=1;
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<1||nx>n||ny<1||ny>n)continue;
            if(a[nx][ny]==1)continue;
            q.push({nx,ny});
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if(a[i][j]==0&&!vis[i][j]){
            a[i][j]=2;
           }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }