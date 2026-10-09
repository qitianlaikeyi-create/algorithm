class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int len=nums.size();
        vector<int>pre(len);
        vector<int>suf(len);
        suf[len-1]=nums[len-1];
        pre[0]=nums[0];
        int ans=4e8;
        for(int i=1;i<len;i++){
            pre[i]=min(nums[i],pre[i-1]);
        }
        for(int i=len-2;i>=0;i--){
            suf[i]=min(nums[i],suf[i+1]);
        }
        for(int i=1;i<len-1;i++){
            if(pre[i-1]<nums[i]&&nums[i]>suf[i+1]){
                ans=min(nums[i]+pre[i-1]+suf[i+1],ans);
            }
        }
        if(ans==4e8)return -1;
        else  return ans;
    }
};