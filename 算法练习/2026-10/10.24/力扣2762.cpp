class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int len=nums.size();
        deque<int>dqmi;
        deque<int>dqma;
        long long l=0;
        long long ans=0;
        for(int i=0;i<len;i++){
            while(!dqmi.empty()&&nums[dqmi.back()]>=nums[i]){
                dqmi.pop_back();
            }
            dqmi.push_back(i);
            while(!dqma.empty()&&nums[dqma.back()]<=nums[i]){
                dqma.pop_back();
            }
            dqma.push_back(i);
            while(abs(nums[dqma.front()]-nums[dqmi.front()])>2){
                if(dqmi.front()==l){
                    dqmi.pop_front();
                }
                if(dqma.front()==l){
                    dqma.pop_front();
                }
                l++;
            }
            ans+=i-l+1;
        }
        return ans;
    }
};