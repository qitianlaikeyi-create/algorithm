#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin>>n;
    vector<int>a(2*n+1);
    int sum[205]={0};
    int midp[205][205];
    int madp[205][205];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=n+1;i<=2*n;i++){
        a[i]=a[i-n];
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=1;i<=2*n;i++){
        midp[i][i]=0;
        madp[i][i]=0;
    }
    //表示从i堆到j堆合成一堆
    for(int len=2;len<=n;len++){
        for(int i=1;i+len-1<=2*n;i++){
            
            int j=i+len-1;
            midp[i][j]=1e9;
            madp[i][j]=-1e9;
            for(int k=i;k<j;k++){
                midp[i][j]=min(midp[i][k]+midp[k+1][j]+sum[j]-sum[i-1],midp[i][j]);
                madp[i][j]=max(madp[i][k]+madp[k+1][j]+sum[j]-sum[i-1],madp[i][j]);
            }
        }
    }
    int ansmi=1e9;
    int ansma=-1e9;
    for(int i=1;i<=n;i++){
        ansmi=min(ansmi,midp[i][i+n-1]);
        ansma=max(ansma,madp[i][i+n-1]);
    }
    cout<<ansmi<<endl;
    cout<<ansma;
    return 0;
}