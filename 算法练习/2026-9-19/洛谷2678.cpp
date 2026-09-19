#include<bits/stdc++.h>
using namespace std;
#define ll long long
int l,n,m;
int a[50005];
bool check(int x){
    int cnt=0;
    int sum=0;
    for(int i=1;i<=n+1;i++){
        if(a[i]-sum<x){
            cnt++;
        }
        else sum=a[i];
    }
    return cnt<=m;
}
int main(){
   cin>>l>>n>>m;
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   a[n+1]=l;
   int le=1,r=l;
   while(le<r){
    int mid=(le+r+1)/2;
    if(check(mid)){
        le=mid;
    }
    else r=mid-1;
   }
   cout<<le;
    return 0;
}