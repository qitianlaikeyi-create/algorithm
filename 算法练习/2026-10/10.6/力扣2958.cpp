class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int len=nums.size();
        unordered_map<int,int>mp;
        int l=0,r=0;
        int ans=0;
        while(r<len){
            mp[nums[r]]++;
            while(mp[nums[r]]>k){
                mp[nums[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
   }
};