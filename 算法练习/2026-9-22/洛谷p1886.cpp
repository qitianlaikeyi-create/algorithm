#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+100;
int main(){
    int n,k;cin>>n>>k;
    vector<int>a(n+1);
    deque<int>pqmi;
    deque<int>pqma;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    } 
    for(int i=1;i<=n;i++){
        while(!pqmi.empty()&&a[pqmi.back()]>a[i]){
            pqmi.pop_back();
        }
        pqmi.push_back(i);
        while(!pqmi.empty()&&pqmi.front()<=i-k)
        pqmi.pop_front();
        if(i>=k){
            cout<<a[pqmi.front()]<<" ";
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        while(!pqma.empty()&&a[pqma.back()]<a[i]){
            pqma.pop_back();
        }
        pqma.push_back(i);
        while(!pqma.empty()&&pqma.front()<=i-k)
        pqma.pop_front();
        if(i>=k){
            cout<<a[pqma.front()]<<" ";
        }
    }
    return 0;
}
