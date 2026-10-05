class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int len=nums.size();
        unordered_map<int,int>mp;
        long long ans=0;
        long long val=0;
        int sum=0;
        for(int r=0;r<len;r++){
            int l=r-k+1;
            val+=nums[r];
            if(mp[nums[r]]==0){
                sum++;
            }
            mp[nums[r]]++;
            if(l<0)continue;
            if(sum==k){
                ans=max(ans,val);
            }
            mp[nums[l]]--;
            if(mp[nums[l]]==0){
                    sum--;
                }
            val-=nums[l];
        }
        return ans;
    }
};