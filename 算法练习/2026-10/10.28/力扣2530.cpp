class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int,vector<int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        long long ans=0;
        while(k--){
            int x=pq.top();
            ans+=x;
            pq.pop();
            pq.push((x+2)/3);
        }
        return ans;
    }
};