class Solution {
public:
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        int len=chargeTimes.size();
        int l=0;
        int ans=INT_MIN;
        deque<int>dqma;
        
        long long tsum=0;
        for(int i=0;i<len;i++){
            while(!dqma.empty()&&chargeTimes[dqma.back()]<=chargeTimes[i]){
                dqma.pop_back();
            }
            dqma.push_back(i);
            
            tsum+=runningCosts[i];
           
            while(!dqma.empty()&&(chargeTimes[dqma.front()]+(i-l+1)*tsum)>budget){
                if(dqma.front()==l){
                    dqma.pop_front();
                }
                tsum-=runningCosts[l];
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};