class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>p(mp.begin(),mp.end());
        sort(p.begin(),p.end(),[&](auto x,auto y){
            return x.second<y.second;
        });
        int ans=p.size();
        for(int i=0;i<p.size();i++){
            k-=p[i].second;
            if(k>=0)ans--;
        }
        return ans;
    }
};