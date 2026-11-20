#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+100;
int f[N]={0};
int cur[N]={0};//桶 k   -> 贴着的巢牌编号
int fi[N]={0};//巢牌 x -> 对应桶编号
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        f[i]=i;
        cur[i]=i;
        fi[i]=i;
    }
    int q;cin>>q;
    for(int i=1;i<=q;i++){
        int op;cin>>op;
        if(op==1){
            int a,b;cin>>a>>b;
            f[a]=cur[b];
        }
        if(op==2){
            int a,b;cin>>a>>b;
            int na=cur[a];
            int nb=cur[b];
            cur[a]=nb;
            cur[b]=na;
            fi[nb]=a;
            fi[na]=b;

        }
        if(op==3){
            int a;cin>>a;
            cout<<fi[f[a]]<<endl;
        }
    
}
    return 0;
}

 