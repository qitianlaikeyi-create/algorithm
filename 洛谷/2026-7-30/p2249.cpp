
//https://www.luogu.com.cn/problem/P2249

//二分

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+100;
int main(){
    int n,m;cin>>n>>m;
    vector<int>a(N);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        int l=1,r=n;
        int ans=-1;
        int x;cin>>x;
    while(l<r){
        int mid=(l+r)/2;
        if(a[mid]>=x){ if(a[mid]==x)ans=mid;r=mid;}
        else l=mid+1;
    }  
 cout<<ans<<" ";
    }
    return 0;
   }