#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;

int main(){
    string s;
    cin>>s;
    s=" "+s;
    deque<int>dq;
    int ans=INT_MAX;
    unordered_map<int,int>mp;
    for(int r=1;r<s.size();r++){
    vector<int>lost;
    vector<int>more;
        int l=r-9;
        mp[s[r]-'0']++;
        if(l<1)continue;
        if(l>1)mp[s[l-1]-'0']--;
        for(int i=0;i<=9;i++){
            if(mp[i]==0)lost.push_back(i);
            else if(mp[i]>1){
                for(int j=1;j<mp[i];j++)
                more.push_back(i);
            }
        }
        sort(lost.begin(),lost.end(),greater<int>());
        sort(more.begin(),more.end(),greater<int>());
        int sum=0;
        for(int i=0;i<lost.size();i++){
            sum+=abs(lost[i]-more[i]);
        }
        ans=min(ans,sum);
    }
    cout<<ans;
    return 0;
}