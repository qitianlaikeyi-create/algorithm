//https://www.luogu.com.cn/problem/P3879

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int n;cin>>n;
   unordered_map<string,set<int>> mp;
   for(int i=1;i<=n;i++){
    int l;cin>>l;
    for(int j=1;j<=l;j++){
        string s;cin>>s;
        mp[s].insert(i);
    }
   }
  int m;cin>>m;
  for(int i=1;i<=m;i++){
    string k;cin>>k;
     if(mp[k].size()==0){cout<<endl;continue;}
    for(auto&p:mp[k]){
        cout<<p<<" ";
    }
    cout<<endl;
  }
    return 0;
}