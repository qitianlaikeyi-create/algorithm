#include<bits/stdc++.h>
 using namespace std;
 using ll=long long;
 const int N=1e6+100;
int b[N]={0};
struct flag{
    ll x,y;
};
struct dis{
    ll u,v;
    double l;
};
int find(int x){
    return b[x]==x?x:b[x]=find(b[x]);
}
bool merge(int x,int y){
    int fx=find(x);
    int fy=find(y);
    if(fx==fy)return false;
    b[fx]=fy;
    return true;
}
vector<dis>a;
vector<flag>f(N);
 int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++)b[i]=i;
    for(int i=1;i<=n;i++){
        cin>>f[i].x>>f[i].y;
    }
    for(int i=1;i<=m;i++){
        ll fi,se;cin>>fi>>se;
        merge(fi,se);
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
        double cur=sqrt((f[i].x-f[j].x)*(f[i].x-f[j].x)+(f[i].y-f[j].y)*(f[i].y-f[j].y));
        a.push_back({i,j,cur});
    }
}
    sort(a.begin(),a.end(),[](const dis&a,const dis&b){
        return a.l<b.l;
    });
    double ans=0.0;
    for(auto [u,v,l]:a){
        if(merge(u,v)){
            ans+=l;
        }
    }
    printf("%.2f",ans);
    return 0;
 }