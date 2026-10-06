class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int len=nums.size();
        int ans=1e6;
        int sum=0;
        unordered_map<int,int>mp;
        int l=0,r=0;
        while(r<len){
            mp[nums[r]]++;
            if(mp[nums[r]]==1){
                sum+=nums[r];
            }
            while(sum>=k){
               ans=min(ans,r-l+1);
               mp[nums[l]]--;
               if(mp[nums[l]]==0){
                sum-=nums[l];
               }
               l++;
            }
            r++;
        }
        if(ans==1e6)return -1;
        return ans;
    }
};