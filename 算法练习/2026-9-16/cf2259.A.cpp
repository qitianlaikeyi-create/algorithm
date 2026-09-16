#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int cnt=0;
        int ans=0;
        string s;cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt=1;
            }
            if((i+1)%k==0){
                if(cnt==0){
                    ans++;
                }
                cnt=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}