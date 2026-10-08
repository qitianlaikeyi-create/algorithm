class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int len=nums.size();
        int l=0,r=len-1;
        int ans=0;
        while(l<r){
            while(l<r&&nums[l]!=0){
                l++;
            }
            while(l<r&&nums[r]==0){
                r--;
            }
            if(l<r){
                ans++;
                l++;
                r--;
            }
        }
        return ans;
    }
};