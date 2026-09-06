//https://www.luogu.com.cn/problem/P1059


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;cin>>n;
    vector<int>a(n+1);
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
   
   int l=s.size();
   cout<<l<<endl;
   for(auto &p:s){
    cout<<p<<" ";
   }

    return 0;
}