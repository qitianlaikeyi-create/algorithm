class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int len = nums.size();
        if(len < 3) return false;
        vector<int> pre(len);
        pre[0] = nums[0];
        for(int i = 1; i < len; i++){
            pre[i] = min(pre[i-1], nums[i]);
        }
        stack<int>st;
        int third=-2e9;
        for(int i=len-1;i>=0;i--){
            if(nums[i]<third){
                return true;
            }
            while(!st.empty()&&nums[i]>st.top()){
                third=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};