// 河南萌新2026郑州大学
//https://ac.nowcoder.com/acm/contest/139666/G

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n;cin>>n;
    string s;cin>>s;
    int l=0;
    bool ok=0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[l]){
            ok=1;
            cout<<l<<" "<<i;
            break;
        }
        else l=i;
    }
    if(!ok)cout<<-1;
    return 0;
}