#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   string circle="";
   char ch;
   while(cin.get(ch)){
    circle+=tolower(ch);
   }
   string target="doge";
   int ans=0;
   int pos=circle.find(target,0);
   while(pos!=string::npos){
    ans++;
    pos=circle.find(target,pos+1);
   } 
   cout<<ans;
return 0;
} 