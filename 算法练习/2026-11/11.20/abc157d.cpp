#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+100;
int f[N],si[N],dir[N];
int find(int x){
    return f[x]==x?x:f[x]=find(f[x]);
}
void merge(int x,int y){
    int fx=find(x);
    int fy=find(y);
    if(fx==fy)return;
    f[fx]=fy;
    si[fy]+=si[fx];
}
void build(int x){
    f[x]=x;
    si[x]=1;
}
int main(){
    int n,m,k;cin>>n>>m>>k;
    int ans[N];
    for(int i=1;i<=n;i++){
        build(i);
    }
    for(int i=1;i<=m;i++){
        int a,b;cin>>a>>b;
        merge(a,b);
        dir[a]++;
        dir[b]++;
    }
    vector<pair<int,int>>p;
    for(int i=1;i<=k;i++){
        int c,d;cin>>c>>d;
        p.push_back({c,d});
    }
    for(int i=1;i<=n;i++){
        ans[i]=si[find(i)]-1-dir[i];
    }
    for(auto [x,y]:p){
        if(find(x)==find(y)){
            ans[x]--;
            ans[y]--;
        }
    }
    
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

 