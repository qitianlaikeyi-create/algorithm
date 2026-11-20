#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+100;
int f[N]={0};
bool flag[N]={0};
int si[N]={0};
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
    if(find(x)!=find(y)){
        f[fx]=fy;
        si[fy]+=si[fx];
        flag[fy]|=flag[fx];
    }
}
int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        build(i);
    }
    for(int i=1;i<=m;i++){
        int a,c;
        char b,d;
        cin>>a>>b>>c>>d;
        if(find(a)==find(c)){
            flag[find(a)]=1;
        }
        else {
            merge(a,c);
        }
    }
    int ans=0,ans1=0;
    for(int i=1;i<=n;i++){
        if(find(i)==i){
            if(flag[i])ans++;
            else ans1++;
        }
    }
    cout<<ans<<" "<<ans1;
    return 0;
}

 