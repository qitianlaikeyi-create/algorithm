//https://www.luogu.com.cn/problem/P1918
// 二分查找 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 struct node{
    int x;
    int y;
   } no;
bool cmp(const node&a,const node&b){
    return a.x<b.x;
   }
int main() {
    int n;
    cin>>n;
    vector<node>a(n+1);
   for(int i=1;i<=n;i++){
    cin>>a[i].x;
    a[i].y=i;
   }
   sort(a.begin()+1,a.begin()+1+n,cmp);
   int q;
   cin>>q;
   while(q--){
    int p;cin>>p;
    int ans=0;int l=1,r=n;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid].x==p){
            ans=a[mid].y;
            break;
        }
        if(a[mid].x<p){
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
   }
    return 0;
}