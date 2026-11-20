#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+100;
int f[N]={0};
bool flag[N]={0};//0为白色
int num[N]={0};//连通块有几个黑色的点
int find(int x){
    return f[x]==x?x:f[x]=find(f[x]);
}
void merge(int x,int y){
    int fx=find(x);
    int fy=find(y);
    if(fx==fy)return;
    f[fx]=fy;
    num[fy]+=num[fx];
}
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        f[i]=i;
    }
    int q;cin>>q;
    for(int i=1;i<=q;i++){
        int op;cin>>op;
        if(op==1){
        int u,v;cin>>u>>v;
        merge(u,v);
        }
        if(op==2){
            int u;cin>>u;
            int root=find(u);
            if(flag[u]){
                flag[u]=0;
                num[root]--;
            }
            else {
                flag[u]=1;
                num[root]++;
            }
        }
        if(op==3){
            int u;cin>>u;
            if(num[find(u)]){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
    }
    return 0;
}

 