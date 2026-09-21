#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1000;
int a[N],b[N],c[N];
int main(){
    string x,y;cin>>x>>y;
    int la=x.size();
    int lb=y.size();
    for(int i=0;i<la;i++){
        a[i]=x[la-1-i]-'0';
    }
    for(int i=0;i<lb;i++){
        b[i]=y[lb-1-i]-'0';
    }
    int len=max(la,lb);
    for(int i=0;i<len;i++){
        int sum=a[i]+b[i]+c[i];
        if(sum>=10){
            c[i]=sum%10;
            c[i+1]++;
        }
        else c[i]=sum;
    }
    if(c[len])len++;
    for(int i=len-1;i>=0;i--){
        cout<<c[i];
    }

    return 0;
}