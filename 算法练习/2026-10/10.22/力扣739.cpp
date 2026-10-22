class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len=temperatures.size();
        stack<int>st;
        vector<int>ans(len,0);
        for(int i=0;i<len;i++){
            while(!st.empty()&&temperatures[i]>temperatures[st.top()]){
                    ans[st.top()]=i-st.top();
                    st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};