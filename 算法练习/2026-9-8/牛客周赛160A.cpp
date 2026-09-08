//牛客周赛160 A
//https://ac.nowcoder.com/acm/contest/139989/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int x;cin>>x;
        if(x==0){cout<<1<<endl;}
        else if(x==1){cout<<2<<endl;}
        else {cout<<0<<endl;}
    }
    return 0;
}