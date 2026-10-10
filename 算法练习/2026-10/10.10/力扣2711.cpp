class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int len=grid.size();
        int wid=grid[0].size();
        unordered_set<int>se;
        vector<vector<int>>ans(len,vector<int>(wid,0));
        for(int i=0;i<len;i++){
            for(int j=0;j<wid;j++){
                se.clear();
                for(int x=i-1,y=j-1;x>=0&&y>=0;x--,y--){
                    se.insert(grid[x][y]);
                }
                int l=se.size();
                se.clear();
                for(int x=i+1,y=j+1;x<len&&y<wid;x++,y++){
                    se.insert(grid[x][y]);
                }
                int r=se.size();
                ans[i][j]=abs(l-r);
            }
        }
        return ans;
    }
};