class Solution {
public:
    int size[250000];
    int id = 1;
    int dfs(int x, int y, int n, int m, vector<vector<int>>& grid, int id) {
        size[id]++;
        grid[x][y] = id;
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= n || nx < 0 || ny >= m || ny < 0 || grid[nx][ny] != 1)
                continue;
            dfs(nx, ny, n, m, grid, id);
        }
        return size[id];
    }
    int largestIsland(vector<vector<int>>& grid) {
        int ans = -1;
        int row = grid.size();
        int col = grid[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    id++;
                    dfs(i, j, row, col, grid, id);
                }
                ans = max(ans, size[id]);
            }
        }
        vector<int> vis_tag(id + 1, 0);
        int tag = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 0) {
                    int cur = 1;
                    tag++;
                    int dx[4] = {-1, 1, 0, 0};
                    int dy[4] = {0, 0, -1, 1};
                    for (int d = 0; d < 4; d++) {
                        int nx = i + dx[d];
                        int ny = j + dy[d];
                        if (nx >= 0 && nx < row && ny >= 0 && ny < col) {
                            int island_id = grid[nx][ny];
                            if (island_id >= 2 && vis_tag[island_id] != tag) {
                                vis_tag[island_id] = tag;
                                cur += size[island_id];
                            }
                        }
                    }
                    ans = max(ans, cur);
                }
            }
        }
        return ans;
    }
};