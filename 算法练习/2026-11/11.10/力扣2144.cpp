class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int len=cost.size();
        sort(cost.begin(),cost.end(),greater<int>());
        int ans=0;
        for(int i=0;i<len;i+=3){
            if(i+1<=len-1)
            ans+=cost[i]+cost[i+1];
            else{
                ans+=cost[i];
            }
        }
return ans;
    }
};