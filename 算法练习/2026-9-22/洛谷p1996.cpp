#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;cin>>n>>m;
    int a[200]={0};
    int sum=0;
    int j=1;
    for(int i=1;i<=n;i++){
        for(;;j==n?j=1:j++){
            if(a[j]!=0)continue;
            sum++;
            if(a[j]==0&&sum==m){
                cout<<j<<" ";
                a[j]=1;
                sum=0;
                break;
            }
        }
    }
    return 0;
}