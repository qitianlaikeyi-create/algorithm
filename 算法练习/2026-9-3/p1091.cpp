//https://www.luogu.com.cn/problem/P1091

//线性dp

#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n;cin>>n;
    int a[200]={0};
    int dp1[200]={0};
    int dp2[200]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        dp1[i]=dp2[i]=1;//初始化
    }
    //找最长递增序列（从左到右）  
    //dp1[i]表示到第i个数时，有几个数可以构成递增
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(a[j]<a[i]){
                dp1[i]=max(dp1[i],dp1[j]+1);
            }
        }
    }
    //找最长递减序列（从右到左）
    //dp2[i]表示到第i个数时，有几个数可以构成递减
    for(int i=n;i>=1;i--){
        for(int j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                dp2[i]=max(dp2[i],dp2[j]+1);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp1[i]+dp2[i]-1);
    }
    cout<<n-ans;
    return 0;
}