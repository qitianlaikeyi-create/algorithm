#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+100;
int f[N]={0};

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
struct node{
    int x,y,t; 
};
vector<node>p(N);
int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        f[i]=i;
        
    }
    for(int i=1;i<=m;i++){
        cin>>p[i].x>>p[i].y>>p[i].t;
        merge(p[i].x,p[i].y);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(find(i)==i)cnt++;
    }
    if(cnt>1){
        cout<<-1;
    }else{
        int ans=0;
        sort(p.begin()+1,p.begin()+1+m,[](const node &a,const node &b){
            return a.t<b.t;
        });
        for(int i=1;i<=n;i++){
            f[i]=i;
        }
        int block=n;
        for(auto c:p){
            if(merge(c.x,c.y)){
                block--;
                if(block==1){
                    cout<<c.t;
                    break;
                }
            }
        }
        }
    return 0;
}

 