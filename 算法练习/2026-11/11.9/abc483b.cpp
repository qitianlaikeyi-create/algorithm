#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    for(int i=1;i<=q;i++){
        int x;cin>>x;
        for(int j=1;j<=(x+1)/2;j++){
            swap(a[j],a[x+1-j]);
            a[j]=-a[j];
            if(j!=x+1-j)
            a[x+1-j]=-a[x+1-j];
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}