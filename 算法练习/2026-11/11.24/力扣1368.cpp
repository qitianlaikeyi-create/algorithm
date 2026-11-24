class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>>dis(row,vector<int>(col,INT_MAX));
        deque<pair<int,int>>dq;
        dis[0][0]=0;
        dq.push_front({0,0});
        while(!dq.empty()){
            auto [x,y]=dq.front();
            if(x==row-1&&y==col-1)return dis[x][y];
            dq.pop_front();
            int dx[4]={0,0,1,-1};
            int dy[4]={1,-1,0,0};
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=row||nx<0||ny>=col||ny<0)continue;
                int w=grid[x][y]==i+1?0:1;
                if(dis[x][y]+w<dis[nx][ny]){
                    dis[nx][ny]=dis[x][y]+w;
                    if(w==0){
                        dq.push_front({nx,ny});
                    }
                    else{
                        dq.push_back({nx,ny});
                    }
                }
            }
        }
        return dis[row-1][col-1];
    }
};