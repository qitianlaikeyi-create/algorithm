class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int len=nums.size();
        vector<int>ans(len,-1);
        stack<int>st;
        for(int i=0;i<2*len;i++){
            int idx=i%len;
            while(!st.empty()&&nums[st.top()]<nums[idx]){
                ans[st.top()]=nums[idx];
                st.pop();
            }
            st.push(idx);
        }
        return ans;
    }
};