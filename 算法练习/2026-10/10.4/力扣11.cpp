class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size();
        int ans=0;
        int l=0;
        int r=len-1;
        while(l<r){
            if(height[l]<height[r]){
                ans=max(ans,height[l]*(r-l));
                l++;
            }
            else {
                ans=max(ans,height[r]*(r-l));
                r--;
            }
        }
        return ans;
    }
};