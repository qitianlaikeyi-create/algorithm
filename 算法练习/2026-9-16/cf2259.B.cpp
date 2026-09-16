#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int j=0;
        int ans=0;
        int o1=0,o2=0;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                if((a[i]/2)%2){
                    o1++;
                }
                else o2++;;
            }
            else j++;
        }
        ans=max({j,o1,o2});
        cout<<ans<<endl;
    }
    return 0;
}