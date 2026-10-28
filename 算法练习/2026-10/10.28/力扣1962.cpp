class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int len=piles.size();
        int ans=0;
        priority_queue<int,vector<int>>pq;
        for(int i=0;i<len;i++){
            pq.push(piles[i]);
        }
        while(k--){
            int x=pq.top();
            pq.pop();
            int y=x-(x/2);
            pq.push(y);
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};