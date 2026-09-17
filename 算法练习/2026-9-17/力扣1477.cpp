class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=n+1;
        int minl=n;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.count(sum-target)){
                int j=mp[sum-target];
                int l=i-j;
                ans=min(ans,l+(j==-1?n:arr[j]));
                minl=min(minl,l);
            }
            arr[i]=minl;
            mp[sum]=i;
        }
        return ans==n+1?-1:ans;
    }
};