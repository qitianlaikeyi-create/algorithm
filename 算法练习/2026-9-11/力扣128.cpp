class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int>s(nums.begin(),nums.end());
        int ans=0,ans1=0;
        int current=0;
        for(auto num:s){
            if(!s.count(num-1)){
                current=num;
                ans1=1;
                while(s.count(current+1)){
                    current+=1;
                    ans1++;
                }
            }        
            ans=max(ans,ans1);    
            }
            return ans;
        }
};