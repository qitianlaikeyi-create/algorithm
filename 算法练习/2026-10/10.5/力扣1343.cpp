class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0;
        int ave=0;
        int sum=0;
        int len=arr.size();
        for(int r=0;r<len;r++){
            int l=r-k+1;
            sum+=arr[r];
            if(l<0)continue;
            ave=sum/k;
            if(ave>=threshold)ans++;
            sum-=arr[l];
        }
        return ans;
    }
};