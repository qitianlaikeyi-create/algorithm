class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int len=arr.size();
        vector<int>sum(len+1,0);
        for(int i=1;i<=len;i++){
            sum[i]=sum[i-1]^arr[i-1];
        }
        vector<int>ans;
        for(auto &q:queries){
            int x=q[0];
            int y=q[1];
        ans.push_back(sum[y+1]^sum[x]);
        }
        return ans;
    }
};