class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int len=nums.size();
        vector<int>pre(len);
        vector<int>suf(len);
        pre[0]=nums[0];
        suf[len-1]=nums[len-1];
        for(int i=1;i<len;i++){
            pre[i]=max(pre[i-1],nums[i]);
        }
        for(int j=len-2;j>=0;j--){
            suf[j]=max(suf[j+1],nums[j]);
        }
        long long ans=0;
         for(int i=1;i<len-1;i++){
            ans=max(ans,(long long)(pre[i-1]-nums[i])*suf[i+1]);
        }
        return ans;
    }
};