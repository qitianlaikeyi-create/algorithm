class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]==0)continue;
            else {
                nums[l]=nums[i];
                l++;
                }
        }
            for(int i=l;i<len;i++){
                nums[i]=0;
            }
        
    }
};