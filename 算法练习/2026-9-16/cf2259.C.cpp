#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]==-1){
            a[i]=1;
        }
        if(a[i]==1){
            break;
        }
    }
    for(int i=n;i>=1;i--){
        if(a[i]==-1){
            a[i]=1;
        }
        if(a[i]==1){
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==-1){
            a[i]=0;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}