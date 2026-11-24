class Solution {
public:
    int maxLength(vector<int>& nums) {
        int len=nums.size();
        int ans=2,l=0;
        int pre=1;
        for(int r=0;r<len;r++){
            while(gcd(pre,nums[r])>1){
                pre/=nums[l];
                l++;
            }
            pre*=nums[r];
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};