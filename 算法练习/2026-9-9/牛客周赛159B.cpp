//牛客周赛159 B
//https://ac.nowcoder.com/acm/contest/139660/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll x;cin>>x;
    ll sum=0;
    ll i=0;
    ll mi=-1,ma=-1;
    while(x){
        if(x%2){
            sum++;
            if(mi==-1){
            mi=i;
            }
            ma=i;
        }
        x=x/2;
        i++;
    }
    cout<<sum<<" "<<mi<<" "<<ma;
    return 0;
}