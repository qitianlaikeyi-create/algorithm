class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>avgs;
        int len=nums.size();
        int ave=0;
        long long sum=0;
        //le=r-k;
        //ri=r+k;
        if(2*k+1>len){
            return vector<int>(len,-1);
        }
        for(int i=0;i<=2*k;i++){
            sum+=nums[i];
            if(i<k)avgs.push_back(-1);
        }
        for(int r=k;r<=len-1-k;r++){
            int le=r-k;
            int ri=r+k;
            if(le<0||ri>=len){
                avgs.push_back(-1);
                continue;
            }
            ave=sum/(2*k+1);
            avgs.push_back(ave);
            if(r<len-1-k){
            sum-=nums[le];
            sum+=nums[ri+1];
            }
        }
        for(int i=len-k;i<len;i++){
            avgs.push_back(-1);
        }
        return avgs;
    }
};