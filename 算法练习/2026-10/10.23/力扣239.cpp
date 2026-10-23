class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>q;
        int len=nums.size();
        for(int r=0;r<len;r++){
            int l=r-k+1;
            while(!q.empty()&&nums[q.back()]<=nums[r]){
                q.pop_back();
            }
            q.push_back(r);
            while(!q.empty()&&q.front()<l){
                q.pop_front();
            }
            if(l<0)continue;
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};