class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        int num=0;
        for(int i=0;i<costs.size();i++){
            num+=costs[i];
            if(num>coins){
                break;
            }
            ans++;
        }
        return ans;
    }
};