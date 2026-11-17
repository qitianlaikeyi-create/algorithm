class Solution {
public:
    int row,col;
    int f[900000];
    void build(int x){
        f[x]=x;
    }
    int find(int x){
        return f[x]==x?x:f[x]=find(f[x]);
    }
    void merge(int x,int y){
        if(find(x)!=find(y)){
            f[find(x)]=find(y);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        row=grid.size();
        col=grid[0].size();
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                build(i*col+j);
                if(grid[i][j]=='1'){
                    ans++;
            }
        }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    if(j>0&&grid[i][j-1]=='1'){
                        if(find(i*col+j)!=find(i*col+j-1)){
                            merge(i*col+j,i*col+j-1);
                            ans--;
                        }
                    }
                    if(i>0&&grid[i-1][j]=='1'){
                        if(find((i-1)*col+j)!=find(i*col+j)){
                            merge((i-1)*col+j,i*col+j);
                            ans--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};