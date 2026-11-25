 #include<bits/stdc++.h>
 using namespace std;
 using ll=long long;
 const int N=1e6+100;
int b[N]={0};
struct flag{
    int x,y;
};
struct dis{
    int u,v;
    double l;
};
int find(int x){
    return b[x]==x?x:b[x]=find(b[x]);
}
bool merge(int x,int y){
    int fx=find(x);
    int fy=find(y);
    if(fx==fy)return false;
    b[fx]=fy;
    return true;
}
 int main(){
    int s,p;cin>>s>>p;
    for(int i=1;i<=p;i++)b[i]=i;
    vector<flag>f(p+1);//每个点的坐标
    for(int i=1;i<=p;i++){
        cin>>f[i].x>>f[i].y;
    }
    vector<dis>fi;//任意两点以及距离
    for(int i=1;i<=p;i++){
        for(int j=i+1;j<=p;j++){
            int dx1=f[i].x,dy1=f[i].y;
            int dx2=f[j].x,dy2=f[j].y;
            double curx=abs(dx1-dx2)*abs(dx1-dx2);
            double cury=abs(dy1-dy2)*abs(dy1-dy2);
            double cur=sqrt(curx+cury);
            fi.push_back({i,j,cur});
        }
    }
    sort(fi.begin(),fi.end(),[](const dis&a,const dis&b){
        return a.l<b.l;
    });
    int num=p;
    double ans=0.0;
    for(auto [u,v,l]:fi){
        if(merge(u,v)){
            num--;
            ans=l;
        }
        if(num==s)break;
    }
    if(s==p){
        cout<<"0.00";
        return 0;
    }
    printf("%.2f",ans);
    return 0;
 }