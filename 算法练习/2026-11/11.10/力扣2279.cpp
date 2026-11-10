class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int len=capacity.size();
        vector<int>num;
        int ans=0;
        for(int i=0;i<len;i++){
            if(capacity[i]==rocks[i])ans++;
            else num.push_back(capacity[i]-rocks[i]);
        }
        sort(num.begin(),num.end());
        int l=num.size();
        for(int i=0;i<l;i++){
            additionalRocks-=num[i];
            if(additionalRocks<0)break;
            ans++;
        }
        return ans;
    }
};