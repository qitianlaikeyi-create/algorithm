class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        int len=values.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        int len1=values[0].size();
        for(int i=0;i<len;i++){
            for(auto x:values[i]){
                pq.push(x);
            }
        }
        long long ans=0;
        int end=len*len1;
        int day=1;
        while(day<=end){
            if(!pq.empty()){
                ans+=(long long)(pq.top())*day;
            }
            pq.pop();
            day++;
        }
        return ans;
    }
};