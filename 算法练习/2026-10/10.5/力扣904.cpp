class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int len=fruits.size();
        int sum=0;
        int ans=0;
        unordered_map<int,int>mp;
        int l=0,r=0;
        while(r<len){
            mp[fruits[r]]++;
            if(mp[fruits[r]]==1){
                sum++;
            }
            while(sum>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    sum--;
                }
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};