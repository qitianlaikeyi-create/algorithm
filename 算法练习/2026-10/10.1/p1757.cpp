#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m;cin>>m>>n;
    vector<pair<int,int> >group[10005];
    int cnt=-1;
    for(int i=1;i<=n;i++){
        int a,b,c;cin>>a>>b>>c;
        cnt=max(cnt,c);
        group[c].push_back({a,b});
    }
    int f[1005]={0};
    for(int i=1;i<=cnt;i++){
        for(int j=m;j>=0;j--){
        for(auto& t:group[i]){
            int x=t.first;
            int y=t.second;
           if(j>=x)f[j]=max(f[j],f[j-x]+y);
        }
    }
    }
    cout<<f[m];
    return 0;
}