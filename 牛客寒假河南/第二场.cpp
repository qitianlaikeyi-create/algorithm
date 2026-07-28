#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
    vector<ll>a(N);
int main(){
    int n;cin>>n;

    priority_queue<int>p;//大根堆
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(p.empty()||a[i]<=p.top())p.push(a[i]);
        else pq.push(a[i]);
        while(p.size()>(i+1)/2){
            pq.push(p.top());
            p.pop();
        }
        while(p.size()<(i+1)/2){
            p.push(pq.top());
            pq.pop();
        }
        if(i%2!=0){
            cout<<p.top()<<endl;
        }
    }
    
    
    return 0;
}