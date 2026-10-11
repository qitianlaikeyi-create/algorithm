#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;cin>>n>>m;
    vector<int>a(n+1);
    int x=m/n;
    for(int i=1;i<=n;i++){
        a[i]=x;
    }
    int y=m%n;
    for(int i=1;i<=y;i++){
        a[i]++;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}