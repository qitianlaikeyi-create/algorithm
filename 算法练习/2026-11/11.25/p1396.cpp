 #include<bits/stdc++.h>
 using namespace std;
 using ll=long long;
 const int N=1e6+100;
int f[N];
struct node{
    int u,v,w;
};
int find(int x){
    return f[x]==x?x:f[x]=find(f[x]);
}
bool merge(int x,int y){
    int fx=find(x);
    int fy=find(y);
    if(fx==fy)return false;
    f[fx]=fy;
    return true;
}
vector<node>fi(N);
int main(){
    int n,m,s,t;cin>>n>>m>>s>>t;
    for(int i=1;i<=n;i++){
        f[i]=i;
    }
    for(int i=1;i<=m;i++){
        cin>>fi[i].u>>fi[i].v>>fi[i].w;
    }
    sort(fi.begin()+1,fi.begin()+1+m,[](const node&a,const node&b){
        return a.w<b.w;
    });
    int cnt=n;
    for(int i=1;i<=m;i++){
        auto [u,v,l]=fi[i];
        if(merge(u,v)){
            if(find(s)==find(t)){
                cout<<l;
                return 0;
            }
        
        }
    }
    return 0;
 }