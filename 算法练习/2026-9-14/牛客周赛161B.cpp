//https://ac.nowcoder.com/acm/contest/140235/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+100;
int main(){
    int n;cin>>n;
    int a[N];
    vector<int>b;
    int ma=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ma=a[1];
    b.push_back(1);
    for(int i=2;i<=n;i++){
        if(a[i]>ma){
            ma=a[i];
            b.push_back(i);
        }
    }
    int ans=b.size();
    int ans1=0;
    if(ans<2){
        cout<<ans<<" "<<0;
    }
    else {
        for(int i=1;i<ans;i++){
            ans1=max(ans1,b[i]-b[i-1]);
        }
        cout<<ans<<" "<<ans1;
    }
    return 0;
}