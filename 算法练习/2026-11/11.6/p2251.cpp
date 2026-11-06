#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    deque<int>dq;
    for(int r=1;r<=n;r++){
        int l=r-m+1;
        while(!dq.empty()&&a[dq.back()]>a[r]){
            dq.pop_back();
        }
        dq.push_back(r);
        if(l<1)continue;
        while(!dq.empty()&&dq.front()<l)dq.pop_front();
        cout<<a[dq.front()]<<"\n";
    }
    return 0;
}