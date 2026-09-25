#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n,m;cin>>n>>m;
    string s;cin>>s;
    vector<int>a(n);
    for(int i=0;i<s.size();i++){
        a[i]=s[i]-'0';
    }
    ll ans=0;
    for(int i=0;i<=9;i++){
          ll sum=0;
        for(int j=0;j<a.size();j++){
            sum=sum*10+a[j];
            sum=sum%m;
        }
        if(sum==0)ans++;
         for(int j=0;j<s.size();j++){
            if(s[j]=='9')s[j]='0';
            else s[j]++;
            a[j]=s[j]-'0';
        }
    }
    cout<<ans;
    return 0;
}