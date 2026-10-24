class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int len=nums.size();
        deque<int>dqmi;
        deque<int>dqma;
        int l=0;
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
            while((long long)(nums[dqma.front()]-nums[dqmi.front()])*(i-l+1)>k){
                if(dqma.front()==l){
                    dqma.pop_front();
                }
                if(dqmi.front()==l){
                    dqmi.pop_front();
                }
                l++;
            }
            ans+=i-l+1;
        }
        return ans;
    }
};