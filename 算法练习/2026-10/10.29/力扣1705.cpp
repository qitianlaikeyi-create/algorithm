class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int len=apples.size();
        int ans=0;
        int j=0;
        while(j<len||!pq.empty()){
            while(!pq.empty()&&pq.top().first<=j){
                pq.pop();
            }
            if(j<len&&apples[j]>0){
                pq.push({j+days[j],apples[j]});
            }
            if(!pq.empty()){
                auto cur=pq.top();
                pq.pop();
                ans++;
                cur.second--;
                if(cur.second){
                    pq.push(cur);
                }
            }
            j++;
        }
        return ans;
    }
};