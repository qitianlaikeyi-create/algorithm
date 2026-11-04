class Solution {
public:
    int trap(vector<int>& height) {
        int len=height.size();
        stack<int>st;
        int ans=0;
        for(int i=0;i<len;i++){
            while(!st.empty()&&height[st.top()]<=height[i]){
                int h=height[st.top()];
                st.pop();
                if(st.empty())break;
                int l=st.top();
                int dh=min(height[l],height[i])-h;
                ans+=dh*(i-l-1);
            }
            st.push(i);
        }
        return ans;
    }
};