#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;cin>>s;
    int k;cin>>k;
    int l=s.size();
    int ans=0;
    int x=0;
    bool ok=0;
    for(int i=0;i<l;i++){
        if(s[i]!='0')ok=1;
    }
    if(!ok){
        cout<<"YES";
        return 0;
    }
    for(int i=l-1;i>=0;i--){
        if(s[i]>='0'&&s[i]<='9'){
            x=s[i]-'0';
        }else x=s[i]-'A'+10;
        if(x==0)ans+=4;
        else{
        int sum=__builtin_ctz(x);
        ans+=sum;
        break;
        }
    }
    if(ans>=k){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}