//https://www.luogu.com.cn/problem/P3156

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   
    int n,m;cin>>n>>m;
    vector<int>a(n+100);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        cout<<a[x]<<endl;
    }
    return 0;
}