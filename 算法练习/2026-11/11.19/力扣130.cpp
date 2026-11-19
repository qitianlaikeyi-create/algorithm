class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    void dfs(int x,int y,int n,int m,vector<vector<char>>& board){
        board[x][y]='*';
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<0||nx>=n||ny<0||ny>=m||board[nx][ny]!='O')continue;
            dfs(nx,ny,n,m,board);
        }
    }
    void solve(vector<vector<char>>& board) {
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<col;i++){
            if(board[0][i]=='O'){
                dfs(0,i,row,col,board);
            }
            if(board[row-1][i]=='O'){
                dfs(row-1,i,row,col,board);
            }
        }
        for(int i=0;i<row;i++){
            if(board[i][0]=='O'){
                dfs(i,0,row,col,board);
            }
            if(board[i][col-1]=='O'){
                dfs(i,col-1,row,col,board);
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='*'){
                    board[i][j]='O';
                }
                else if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};