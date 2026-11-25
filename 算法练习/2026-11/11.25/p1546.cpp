#include<bits/stdc++.h>
 using namespace std;
 using ll=long long;
 const int N=1e6+100;
int b[N]={0};
struct flag{
    int x,y;
};
struct dis{
    int u,v;
    int l;
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
 int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        b[i]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;cin>>x;
            if(i==j)continue;
            a.push_back({i,j,x});
        }
    }
    sort(a.begin(),a.end(),[](const dis &a,const dis&b){
        return a.l<b.l;
    });
    int ans=0,cnt=n;
    for(auto [u,v,l]:a){
        if(merge(u,v)){
            cnt--;
            ans+=l;
        }
    }
    cout<<ans;
    return 0;
 }