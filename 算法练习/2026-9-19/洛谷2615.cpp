#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin>>n;
    int a[40][40]={0}; 
    a[1][(n+1)/2]=1;
    for(int i=2;i<=n*n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(a[j][k]==i-1&&j==1&&k!=n){
                    a[n][k+1]=i;
                }
                else if(a[j][k]==i-1&&k==n&&j!=1){
                    a[j-1][1]=i;
                }else if(a[j][k]==i-1&&j==1&&k==n){
                    a[j+1][k]=i;
                }
                else if(a[j][k]==i-1&&j!=1&&k!=n){
                    if(!a[j-1][k+1])a[j-1][k+1]=i;
                    else a[j+1][k]=i;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}