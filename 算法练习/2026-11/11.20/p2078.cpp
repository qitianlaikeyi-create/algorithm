#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+100;
int fa[N]={0};
int fb[N]={0};
int asi[N]={0};
int bsi[N]={0};
void abuild(int x){
    fa[x]=x;
    asi[x]=1;
}
void bbuild(int x){
    fb[x]=x;
    bsi[x]=1;
}
int afind(int x){
    return fa[x]==x?x:fa[x]=afind(fa[x]);
}
int bfind(int x){
    return fb[x]==x?x:fb[x]=bfind(fb[x]);
}
void amerge(int x,int y){
    int nx=afind(x);
    int ny=afind(y);
    if(nx==ny)return;
    fa[ny]=nx;
    asi[nx]+=asi[ny];
}
void bmerge(int x,int y){
    int nx=bfind(x);
    int ny=bfind(y);
    if(nx==ny)return;
    fb[ny]=nx;
    bsi[nx]+=bsi[ny];
}
int main(){
    int n,m,p,q;cin>>n>>m>>p>>q;
    for(int i=1;i<=n;i++){
        abuild(i);
    }
    for(int i=1;i<=m;i++){
        bbuild(i);
    }
    for(int i=1;i<=p;i++){
        int x,y;cin>>x>>y;
        amerge(x,y);
    }
    for(int i=1;i<=q;i++){
        int x,y;cin>>x>>y;
        x=abs(x);
        y=abs(y);
        bmerge(x,y);
    }
    int fi=asi[afind(1)];
    int se=bsi[bfind(1)];
    int ans=min(fi,se);
    cout<<ans;
    return 0;
}