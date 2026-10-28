class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        int len=nums.size();
        for(int i=0;i<len;i++){
            pq.push(nums[i]);
        }
        int ans=0;
        while(pq.top()<k){
            ans++;
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();
            pq.push(min(x,y)*2+max(x,y));
        }
        return ans;
    }
};