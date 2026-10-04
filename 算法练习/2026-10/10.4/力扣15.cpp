class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<len;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            int l=i+1,r=len-1;
            while(l<r){
                int target=-nums[i];
                int sum=nums[l]+nums[r];
                if(sum==target){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;r--;
                    while(l<r&&nums[l]==nums[l-1])l++;
                    while(l<r&&nums[r]==nums[r+1])r--;
                }
                else if(sum<target)l++;
                else r--;
            }
        }
        return ans;
    }
};