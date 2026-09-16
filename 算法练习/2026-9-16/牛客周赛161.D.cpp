#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
char a[300][300];
bool vis[300][300]={0};
int dfs4(int x,int y){
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    vis[x][y]=1;
    int cnt=1;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='1'&&!vis[nx][ny]){
            cnt+=dfs4(nx,ny);
        }
    }
return cnt;
}
int dfs8(int x,int y){
    int dx[8]={-1,1,0,0,-1,-1,1,1};
    int dy[8]={0,0,-1,1,-1,1,-1,1};
    vis[x][y]=1;
    int cnt=1;
    for(int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='1'&&!vis[nx][ny]){
            cnt+=dfs8(nx,ny);
        }
    }
return cnt;
}
int main(){
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int c4=0;
    int s4=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='1'&&!vis[i][j]){
                c4++;
                int area=dfs4(i,j);
                s4=max(s4,area);
            }
        }
    }
    memset(vis,0,sizeof(vis));
    int c8=0,s8=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='1'&&!vis[i][j]){
                c8++;
                int area=dfs8(i,j);
                s8=max(s8,area);
            }
        }
    }
    cout<<c4-c8<<" "<<s4<<" "<<s8;
    return 0;
}
