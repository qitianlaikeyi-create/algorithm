class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int len=heights.size();
        stack<int>st;
        vector<int>l(len);
        vector<int>r(len);
        for(int i=0;i<len;i++){
            while(!st.empty()&&heights[st.top()]>=heights[i]){ 
               st.pop();
            }
            l[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty())st.pop();
        for(int i=len-1;i>=0;i--){
            while(!st.empty()&&heights[st.top()]>=heights[i]){ 
               st.pop();
            }
            r[i]=st.empty()?len:st.top();
            st.push(i);
        }
        int ans=INT_MIN;
        for(int i=0;i<len;i++){
             ans=max(ans,heights[i]*(r[i]-l[i]-1));
        }
        return ans;
    }
};