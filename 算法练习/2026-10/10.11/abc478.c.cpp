#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k;cin>>n>>k;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int>b=a;
    sort(b.begin(),b.end());
    int fir=-1,last=-1;
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){
            if(fir==-1){
                fir=i;
            }
            last=i;
        }
    }
    if(fir==-1||last-fir+1<=k){
        cout<<"Yes";
    }else cout<<"No";
    return 0;
}