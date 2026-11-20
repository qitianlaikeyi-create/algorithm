#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+100;
int f[N]={0};
int si[N]={0};
int flag[N]={0};
void build(int x){
    f[x]=x;
    si[x]=1;
}
int find(int x){
    return f[x]==x?x:f[x]=find(f[x]);
}
void merge(int x,int y){
    int fx=find(x);
    int fy=find(y);
    f[fx]=fy;
    si[fy]+=si[fx];
}
int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        build(i);
    }
    for(int i=1;i<=m;i++){
        int a,b;cin>>a>>b;
        if(find(a)==find(b)){
            continue;
        }
        else{
            merge(a,b);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(find(i)==i){
            ans+=si[i]*(si[i]-1)/2;
        }
    }
    int fi=ans-m;
    cout<<fi<<endl;
    return 0;
}

 