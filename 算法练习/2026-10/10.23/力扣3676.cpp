class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int len=nums.size();
        stack<int>st;
        long long ans=0;
        for(int i=0;i<len;i++){
            while(!st.empty()&&nums[st.top()]<nums[i]){
                int j=st.top();
                st.pop();
                if(i-j>=2)ans++;
            }
            if(!st.empty()&&i-st.top()>=2)ans++;
            st.push(i);
        }
        return ans;
    }
};