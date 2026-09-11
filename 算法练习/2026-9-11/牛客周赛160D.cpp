// 牛客周赛160 D
//https://ac.nowcoder.com/acm/contest/139989/D
/*
规律：2*n-n的二进制中1的个数
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   ll  n;cin>>n;
   ll ans=0;
   ans=2*n-__builtin_popcountll(n);
   cout<<ans;

    return 0;
}
