class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>dqmi;
        deque<int>dqma;
        int len=nums.size();
        int l=0;
        int ans=INT_MIN;
        for(int i=0;i<len;i++){
            while(!dqmi.empty()&&nums[dqmi.back()]>nums[i]){
                dqmi.pop_back();
            }
            dqmi.push_back(i);
            while(!dqma.empty()&&nums[dqma.back()]<nums[i]){
                dqma.pop_back();
            }
            dqma.push_back(i);
            while(nums[dqma.front()]-nums[dqmi.front()]>limit){
                if(dqma.front()==l){
                    dqma.pop_front();
                }
                if(dqmi.front()==l){
                    dqmi.pop_front();
                }
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};