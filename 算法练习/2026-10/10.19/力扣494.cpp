class Solution {
    /*
    正数和为N，负数绝对值和为M，
    N-M=target
    N+M=总和
    N=（target+总和）/2
    */
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int num=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            num+=nums[i];
        }
        int fin=(num+target)/2;
        if((num+target)&1){return 0;}
        if(abs(target)>num){return 0;}
        vector<int>dp(num+1,0);
        dp[0]=1;
        for(int i=0;i<len;i++){
            for(int j=fin;j>=nums[i];j--){
                dp[j]+=dp[j-nums[i]];
            }
        }
        return dp[fin];
    }
};