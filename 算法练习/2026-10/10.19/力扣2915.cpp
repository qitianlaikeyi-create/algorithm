class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int len=nums.size();
        vector<int>dp(1005,INT_MIN);
        dp[0]=0;
        for(int i=0;i<len;i++){
            for(int j=target;j>=nums[i];j--){
                dp[j]=max(dp[j],dp[j-nums[i]]+1);
            }
        }
        return dp[target]>0?dp[target]:-1;
    }
};