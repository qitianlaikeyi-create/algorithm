#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+100;
int fa[N];
int find(int x){
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void merge(int a,int b){
    fa[find(a)]=find(b);
}
int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++){
        int z;cin>>z;
        int x,y;cin>>x>>y;
        if(z==1){
            merge(x,y);
        }
        else if(z==2){
            if(find(x)==find(y)){
                cout<<"Y"<<endl;
            }
            else cout<<"N"<<endl;
        }
    }
    return 0;
}
