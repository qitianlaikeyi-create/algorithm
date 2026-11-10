class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int  len=nums.size();
        int ans=nums[len-1]+nums[len-2]-nums[0];
        return ans;
    }
};