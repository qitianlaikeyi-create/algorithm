
//https://www.luogu.com.cn/problem/P1090

//priority_queue

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;cin>>n;
    ll ans=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        pq.push(x);
    }
   while(pq.size()>1){ 
    int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        ans+=a+b;
        pq.push(a+b);
    }
    cout<<ans;
    return 0;
}