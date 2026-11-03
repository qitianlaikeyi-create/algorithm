#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<ll>a(n+1);
    stack<pair<ll,int>>st;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        while(!st.empty()&&st.top().first<=a[i]){
            ans^=st.top().second;
            st.pop();
        }
        st.push({a[i],i});
        ans^=i;
        cout<<ans<<"\n";
    }
    return 0;
}