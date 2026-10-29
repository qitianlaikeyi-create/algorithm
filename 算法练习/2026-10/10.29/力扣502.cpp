class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int ans=w;
        int len=profits.size();
        vector<pair<int,int>>p;
        for(int i=0;i<len;i++){
            p.push_back({capital[i],profits[i]});
        }
        sort(p.begin(),p.end());
        priority_queue<int>pq;
        int j=0;
        for(int i=0;i<k;i++){
            while(j<len&&p[j].first<=ans){
                pq.push(p[j].second);
                j++;
            }
            if(pq.empty())break;
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};