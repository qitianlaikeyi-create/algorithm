class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int wid=grid.size();
        int len=grid[0].size();
        int l=x;
        int r=l+k-1;
        while(l<r){
            for(int i=y;i<y+k;i++){
                swap(grid[l][i],grid[r][i]);
            }
            l++;
            r--;
        }
        return grid;
    }
};