//牛客每日一题9.11

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        ll ans=0;
        ll len=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                len=0;
            }
            else  len++;
            ans=max(ans,len);
        }
        len=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                len=0;
            }
            else len++;
            ans=max(ans,len);
        }
        cout<<ans<<endl;
    }
    return 0;
}