class Solution {
public:
static const int N=2e5+100;
bool flag[N]={0};
    void dfs(int x,vector<vector<int>>&f){
        flag[x]=1;
        for(auto c:f[x]){
            if(!flag[c]){
                dfs(c,f);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int len=n;
        vector<vector<int>>f(len);
        for(int i=0;i<edges.size();i++){
            f[edges[i][0]].push_back(edges[i][1]);
            f[edges[i][1]].push_back(edges[i][0]);
        }
        dfs(source,f);
        if(flag[destination])return true;
        else return false;
    }
};