class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int ans[20005]={0};
        ans[0]=1;
        int sum=0;
        int len=nums.size();
        for(int i=0;i<len;i++)sum+=nums[i];
        if(sum&1)return false;
        int target=sum/2;
        for(int i=0;i<len;i++){
            for(int j=target;j>=nums[i];j--){
                ans[j]=ans[j]||ans[j-nums[i]];
            }
        }   
        return ans[target];
    }
};