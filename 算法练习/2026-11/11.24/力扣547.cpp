class Solution {
public:
    bool vis[200]={0};
    int dfs(int x,vector<vector<int>>&f){
        vis[x]=1;
        for(auto c:f[x]){
            if(!vis[c]){
                dfs(c,f);
            }
        }
        return 1;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int len=isConnected.size();
        
        vector<vector<int>>f(200);
        for(int i=0;i<len;i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(isConnected[i][j]==1){
                    f[i].push_back(j);
                    f[j].push_back(i);
                }
            }
        }
        int ans=0;
        for(int i=0;i<len;i++){
            if(!vis[i]){
                ans+=dfs(i,f);
            }
        }
        return ans;
    }
};