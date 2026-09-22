#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int m,n;cin>>m>>n;
    vector<int>a(n+1);
    queue<int>q;
    int ans[10005]={0};
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(!q.empty()){
            if(ans[a[i]]==1)continue;
            else if(q.size()<=m-1){
                sum++;
                ans[a[i]]=1;
                q.push(a[i]);
            }
            else if(q.size()==m){
                sum++;
                int x=q.front();
                ans[x]=0;
                q.pop();
                q.push(a[i]);
                ans[a[i]]=1;
            }
        } else{
            q.push(a[i]);
            ans[a[i]]=1;
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
