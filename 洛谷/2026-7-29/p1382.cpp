
//https://www.luogu.com.cn/problem/P1328

//模拟

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,na,nb;cin>>n>>na>>nb;
    int b[1000],c[1000];
    for(int i=1;i<=na;i++)cin>>b[i];
    for(int i=1;i<=nb;i++)cin>>c[i];
    int x=0,y=0;
    for(int i=1;i<=n;i++){
       int ha=b[(i-1)%na+1];
        int hb=c[(i-1)%nb+1];
          int ans=ha-hb;
        if(ha==0){
            if(ans==0)continue;
            else if(ans==-1)y++;
            else if(ans==-2)x++;
            else if(ans==-3)x++;
            else if(ans==-4)y++;
        }
        if(ha==1){
            if(ans==0)continue;
            else if(ans==-1)y++;
            else if(ans==-2)x++;
            else if(ans==-3)y++;
            else if(ans==1)x++;
        }
        if(ha==2){
            if(ans==0)continue;
            else if(ans==2)y++;
            else if(ans==1)x++;
            else if(ans==-1)y++;
            else if(ans==-2)x++;
        }
        if(ha==3){
            if(ans==0)continue;
            else if(ans==3)y++;
            else if(ans==2)y++;
            else if(ans==1)x++;
            else if(ans==-1)x++;
        }
        if(ha==4){
    if(ans==0)continue;
    else if(ans==4)x++;
    else if(ans==3)x++;
    else if(ans==2)y++;
    else if(ans==1)y++;
    }
}
    cout<<x<<" "<<y;
    return 0;
}