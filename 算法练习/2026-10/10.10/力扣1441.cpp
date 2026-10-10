class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int len=target.size();
        vector<string>ans;
        for(int i=1,j=0;i<=n&&j<len;i++){
            if(i==target[j]){
                ans.push_back("Push");
                j++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};