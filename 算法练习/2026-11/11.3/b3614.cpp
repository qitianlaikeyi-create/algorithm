#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        stack<ll>st;
        for(int i=1;i<=n;i++){
            string s;cin>>s;
            if(s=="push"){
                ll x;cin>>x;
                st.push(x);
            }
            else if(s=="pop"){
                if(st.empty())cout<<"Empty"<<endl;
                else{
                    st.pop();
                }
            }
            else if(s=="query"){
                if(st.empty())cout<<"Anguei!"<<endl;
                else cout<<st.top()<<endl;
            }
            else{
                cout<<st.size()<<endl;
            }
        }
    }
    return 0;
}