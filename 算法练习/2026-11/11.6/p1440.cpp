#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

int main(){
    int n,m;cin>>n>>m;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    deque<int>dq;
    for(int r=1;r<=n;r++){
        int l=r-m;
        while(!dq.empty()&&dq.front()<l)dq.pop_front();
        if(dq.empty()){cout<<"0"<<"\n";}
        else cout<<a[dq.front()]<<"\n";
        while(!dq.empty()&&a[dq.back()]>a[r]){
            dq.pop_back();
        }
        dq.push_back(r);
    }
    return 0;
}