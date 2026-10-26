class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int len=stones.size();
        for(int i=0;i<len;i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x==y)continue;
            else {
                int z=x-y;
                pq.push(z);
            }
        }
        if(pq.empty())return 0;
        return pq.top();
    }
};