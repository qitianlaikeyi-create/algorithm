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
    int n,c;cin>>n>>c;
    for(int i=1;i<=n;i++){
        b[i]=i;
        cin>>f[i].x>>f[i].y;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            ll cur=(f[i].x-f[j].x)*(f[i].x-f[j].x)+(f[i].y-f[j].y)*(f[i].y-f[j].y);
            if(cur>=c)
            fi.push_back({i,j,cur});
        }
    }
    sort(fi.begin(),fi.end(),[](const dis&a,const dis&b){
        return a.l<b.l;
    });
    ll cnt=n,ans=0;
    for(auto [u,v,l]:fi){
        if(merge(u,v)){
            ans+=l;
            cnt--;
        }
    }
    if(cnt==1){
        cout<<ans;
    }
    else cout<<-1;
    return 0;
 }