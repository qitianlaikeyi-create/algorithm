#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+100;
int fa[N];
int find(int x){
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void merge(int x,int y){
    fa[find(x)]=find(y);
    fa[find(y)]=find(x);
}
int main(){
    int n,m,p;cin>>n>>m>>p;
    for(int i=1;i<=5000;i++)fa[i]=i;
    for(int i=1;i<=m;i++){
        int m1,m2;cin>>m1>>m2;
        merge(m1,m2);
    }    
    for(int i=1;i<=p;i++){
        int a,b;cin>>a>>b;
        if(find(a)==find(b)){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}