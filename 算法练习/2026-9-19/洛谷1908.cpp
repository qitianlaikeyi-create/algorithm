#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5*5+100;
ll ans=0;
void merge_sort(vector<int>&a,int l,int r){
    if(l>=r){
     return;   
    }//判断是否剩一个元素或者没有元素了
    int mid=(l+r)/2;
    merge_sort(a,l,mid);//递归左半边
    merge_sort(a,mid+1,r);//递归右半边
    int i=l;
    int j=mid+1;
    vector<int>tmp;//保存排完序的
    while(i<=mid&&j<=r){
        if(a[i]<=a[j]){
            tmp.push_back(a[i]);
            i++;
        }
        else {
            ans+=mid-i+1;//求逆序对（因为都是有序的，一个大于，后面的都大于）
            tmp.push_back(a[j]);
            j++;
        }
    }
    while(i<=mid){
        tmp.push_back(a[i]);
        i++;
    }//判断是不是左边有剩余
    while(j<=r){
        tmp.push_back(a[j]);
        j++;
    }//判断是不是右边有剩余
    //这两个位置可以随便写，因为只会有一边剩余
     for(int i=0;i<tmp.size();i++){
            a[l+i]=tmp[i];
        }
// 还原a数组，注意l+i，因为是从l开始的，部分的排序，此处不是整个数组的排序
}
int main(){
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    cout<<ans;
    return 0;
}