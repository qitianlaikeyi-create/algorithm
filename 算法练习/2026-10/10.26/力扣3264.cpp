class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int len=nums.size();
        vector<int>ans(len);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<len;i++){
            pq.push({nums[i],i});
        }
        while(k--){
            auto [x,y]=pq.top();
            pq.pop();
            pq.push({x*multiplier,y});
        }
        while(!pq.empty()){
            auto [x,y]=pq.top();
            pq.pop();
            ans[y]=x;
        }
        return ans;
    }
};