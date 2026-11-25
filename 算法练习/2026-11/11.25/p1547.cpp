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
    ll l;
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
vector<dis>fi;
vector<flag>f(N);
 int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        b[i]=i;
    }
    for(int i=1;i<=m;i++){
        int a,b,c;cin>>a>>b>>c;
        fi.push_back({a,b,c});
    }
    sort(fi.begin(),fi.end(),[](const dis&a,const dis&b){
        return a.l<b.l;
    });
    ll ans=0;
    for(auto [u,v,l]:fi){
        if(merge(u,v)){
            ans=l;
        }
    }
    cout<<ans;
    return 0;
 }