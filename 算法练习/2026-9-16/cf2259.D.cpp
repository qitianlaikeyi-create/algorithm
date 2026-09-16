#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    string s;
    int a0=0;
    bool ans=0;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0){
            a0++;
            if(!ans){
                ans=1;
                s+="A";
            }
            else {
                s+="B";
            }

        }
        else s+="C";
    }
    if(a0==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
   }
    return 0;
}