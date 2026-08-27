//https://www.luogu.com.cn/problem/P5266

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll q;cin>>q;
   
    unordered_map<string,int>mp;
    for(int i=1;i<=q;i++){
        int op;cin>>op;
        if(op==1){
            string s;
            ll score;
            cin>>s>>score;
            mp[s]=score;
            cout<<"OK"<<endl;
        }else if(op==2){
            string k;cin>>k;
            if(mp.count(k)){
                cout<<mp[k]<<endl;    
            } 
            else cout<<"Not found"<<endl;
        }
        else if(op==3){
            string t;
            cin>>t;
            if(mp.count(t)){
            mp.erase(t);
            cout<<"Deleted successfully"<<endl;
            }
            else cout<<"Not found"<<endl;
        }
        else if(op==4){
            cout<<mp.size()<<endl;
        }
    }

    return 0;
}