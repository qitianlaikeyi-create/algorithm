#include<bits/stdc++.h>
using namespace std;
    int n,m;
    char a[105][105];
void dfs(int x,int y){
    a[x][y]='*';
     int h[8]={-1,+1,0,0,-1,+1,-1,+1};
     int l[8]={0,0,-1,+1,-1,-1,+1,+1};
     for(int i=0;i<8;i++){
        if(x+h[i]>n||x+h[i]<1||y+l[i]>m||y+l[i]<1)continue ;
        if(a[x+h[i]][y+l[i]]=='@')dfs(x+h[i],y+l[i]);
     }
}
int main(){
    while(cin>>n>>m&&n!=0&&m!=0){
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];  
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]=='@'){
                    ans++;
                    dfs(i,j);
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}