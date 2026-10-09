class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int>mpl;
        unordered_map<int,int>mpr;
        long long  ans=0;
        int mod=1000000007;
        for(auto x:nums){
            mpr[x]++;
        }
        for(auto x:nums){
            mpr[x]--;
            ans+=(long long)mpr[x*2]*mpl[x*2];
            mpl[x]++;
        }
        return ans%mod;
    }
};