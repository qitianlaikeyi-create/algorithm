class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int len=gifts.size();
        priority_queue<int>pq;
        for(int i=0;i<len;i++){
            pq.push(gifts[i]);
        }
        long long ans=0;
        while(k--){
            int x=pq.top();
            pq.pop();
            x=sqrt(x);
            pq.push(x);
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};