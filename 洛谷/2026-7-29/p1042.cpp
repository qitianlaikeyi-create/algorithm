
//https://www.luogu.com.cn/problem/P1042

//模拟

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s="";
    char c;
    ll w=0,l=0;
    while(cin.get(c)&&c!='E')if(c=='L'||c=='W')s+=c;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W')w++;else if(s[i]=='L')l++;
        if(max(w,l)>=11&&abs(w-l)>=2){
            cout<<w<<":"<<l<<endl;
            w=0,l=0;
        }
    }
    cout<<w<<":"<<l<<endl;
    cout<<endl;
    w=0,l=0;
 for(int i=0;i<s.size();i++){
        if(s[i]=='W')w++;else if(s[i]=='L') l++;
        if(max(w,l)>=21&&abs(w-l)>=2){
            cout<<w<<":"<<l<<endl;
            w=0,l=0;
        }
    }
          cout<<w<<":"<<l<<endl;
    return 0;
}