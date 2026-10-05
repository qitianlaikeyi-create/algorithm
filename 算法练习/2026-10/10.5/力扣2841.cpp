class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int len=nums.size();
        long long ans=0;
        int sum=0;
        long long val=0;
        unordered_map<int,int>mp;
        for(int r=0;r<len;r++){
            int l=r-k+1;
            val+=nums[r];
            if(mp[nums[r]]==0){
                sum++;
            }
            mp[nums[r]]++;
            if(l<0)continue;
            if(sum>=m){
                ans=max(ans,val);
            }
            if(mp[nums[l]]!=0){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)sum--;
                val-=nums[l];
            }
            }
        return ans;
    }
};