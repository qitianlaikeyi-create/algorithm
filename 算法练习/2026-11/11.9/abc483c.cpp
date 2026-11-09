#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
const int N=2e5+100;
int main(){
    int n,m;cin>>n>>m;
    vector<int>num(n+1);
    vector<vector<int>>se(n+1);
    for(int i=1;i<=m;i++){
        int x,y;cin>>x>>y;
        num[x]++;
        se[x].push_back(y);
    }
    set<pair<int,int>>s;
   
    for(int i=1;i<=n;i++){
        s.insert({num[i],-i});
    }
    for(int i=1;i<=n;i++){
        s.erase({num[i],-i});
        for(auto x:se[i]){
            s.erase({num[x],-x});
            num[x]++;
            s.insert({num[x],-x});
        }
        cout<<-s.rbegin()->second<<endl;
        for(auto x:se[i]){
            s.erase({num[x],-x});
            num[x]--;
            s.insert({num[x],-x});
        }
        s.insert({num[i],-i});
    }
    return 0;
}

 