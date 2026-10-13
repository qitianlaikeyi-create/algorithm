class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>ans;
        stack<long long>st;
        int len=nums.size();
        for(int i=0;i<len;i++){
            long long x=nums[i];
            while(!st.empty()&&x==st.top()){
                st.pop();
                x*=2;
            }
        st.push(x);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        vector<long long>ans1;
        for(int i=ans.size()-1;i>=0;i--){
            ans1.push_back(ans[i]);
        }
        return ans1;
    }
};