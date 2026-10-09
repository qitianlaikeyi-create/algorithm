class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int wid=grid.size();
        int len=grid[0].size();
        vector<int>row(wid);
        vector<int>col(len);
        for(int i=0;i<wid;i++){
            for(int j=0;j<len;j++){
                if(grid[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        long long ans=0;
        for(int i=0;i<wid;i++){
            for(int j=0;j<len;j++){
                if(grid[i][j]==1){
                    ans+=(long long)(row[i]-1)*(col[j]-1);
                }
            }
        }
        return ans;
    }
};