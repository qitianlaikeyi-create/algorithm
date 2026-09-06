//https://www.luogu.com.cn/problem/solution/P1309


#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct player{
    int id;
    int s;
    int w;
} ;
bool cmp(const player&a,const player&b){
    if(a.s==b.s){
        return a.id<b.id;
    }
    return a.s>b.s;
}
int main(){

    ll n,r,q;cin>>n>>r>>q;
    vector<player>a(2*n+100);
    for(int i=1;i<=2*n;i++){
        cin>>a[i].s;
        a[i].id=i;
    }
    for(int i=1;i<=2*n;i++){
        cin>>a[i].w;
    }
    for(int i=1;i<=r;i++){
        stable_sort(a.begin()+1,a.begin()+1+2*n,cmp);
        for(int j=1;j<=2*n;j+=2){
            if(a[j].w>a[j+1].w){
                a[j].s++;
            }
            else a[j+1].s++;
        }

    }
    stable_sort(a.begin()+1,a.begin()+1+2*n,cmp);
    cout<<a[q].id;
    return 0;
}