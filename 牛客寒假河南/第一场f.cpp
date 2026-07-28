#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
       ll a,b,c,d;cin>>a>>b>>c>>d;
     bool ok=0,ok1=0;
        ll num=2*a+b;
        ll num1=2*c+d;
        ll ans=min(num1,num);
        if(ans%2==0){ans=ans;ok=1;ok1=1;}
       else if(ans%2!=0){
           if(b>0||num==ans)ok=1;
           if(d>0||num1==ans)ok1=1;
       }
        if(ok&&ok1)cout<<ans*2<<endl;
        else cout<<(ans-1)*2<<endl;
    }
return 0;
}
