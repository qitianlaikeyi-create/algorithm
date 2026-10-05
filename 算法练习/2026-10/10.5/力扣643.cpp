class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=-1e5;
        double sum=0;
        int len=nums.size();
        for(int r=0;r<len;r++){
            int l=r-k+1;
            sum+=nums[r];
            if(l<0)continue;
            double fin=sum/k;
            ans=max(ans,fin);
            sum-=nums[l];
        }
        return ans;
    }
};