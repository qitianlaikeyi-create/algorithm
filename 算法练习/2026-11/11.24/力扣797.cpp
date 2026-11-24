class Solution {
public:
vector<vector<int>>ans;
vector<int>path;
bool flag[20]={0};
void dfs(int x,int y,vector<vector<int>>&f){
    flag[x]=1;
    path.push_back(x);
    if(x==y){
        ans.push_back(path);
        return ;
    }
    for(auto c:f[x]){
        if(!flag[c]){
            dfs(c,y,f);
            flag[c]=0;
            path.pop_back();
        }
    }
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int len=graph.size();
        vector<vector<int>>f(20);
        for(int i=0;i<len;i++){
            for(int j=0;j<graph[i].size();j++){
                f[i].push_back(graph[i][j]);
            }
        }
        dfs(0,len-1,f);
        return ans;
    }
};