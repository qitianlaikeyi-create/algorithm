class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int len=grid.size();
        for(int i=0;i<len;i++){
            vector<int>l;
            int x=i,y=0;
            while(x<len&&y<len){
                l.push_back(grid[x][y]);
                x++;y++;
            }
            sort(l.begin(),l.end(),greater<int>());
            x=i,y=0;
            for(int i=0;i<l.size();i++){
                grid[x][y]=l[i];
                x++;
                y++;
            }
        }
        for(int i=1;i<len;i++){
            vector<int>l;
            int x=0,y=i;
            while(x<len&&y<len){
                l.push_back(grid[x][y]);
                x++;y++;
            }
            sort(l.begin(),l.end());
             x=0,y=i;
             for(int i=0;i<l.size();i++){
                grid[x][y]=l[i];
                x++;
                y++;
             }
        }
        return grid;
    }
};