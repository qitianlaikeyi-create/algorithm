//https://ac.nowcoder.com/acm/contest/140235/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int a,b,c;cin>>a>>b>>c;
    int ans=0;
    
    if(b==1)ans+=1;
    if(c==1)ans+=2;
    cout<<ans;
    return 0;
}
