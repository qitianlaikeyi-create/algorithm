class Solution {
public:
    int f[90005];
    int size[90005];//每个源头对应集合所包含的个数
    int cnt[90005]={0};//表示能够清除的源头所包含的集合的数量
    int infect[90005];
    //记录这个未感染连通块连接的感染源
    // -1：还没有感染源连接
    // >=0：只有一个感染源，记录感染源编号
    // -2：连接了至少两个不同的感染源
    bool flag[90005]={0};//标记这个节点是否是被感染的
    int find(int x){
        return f[x]==x?x:f[x]=find(f[x]);
    }
    void merge(int x,int y){
    int fx=find(x);
    int fy=find(y);
    if(fx==fy)return;
    f[fx]=fy;
    size[fy]+=size[fx];
}
    void build(int x){
        for(int i=0;i<x;i++){
            f[i]=i;
            size[i]=1;
            infect[i]=-1;
        }
    }
    int minMalwareSpread(vector<vector<int>>& graph, vector<int>& initial) {
        int len=graph.size();
        int l=graph[0].size();
        memset(cnt,0,sizeof(cnt));
        memset(flag,0,sizeof(flag));
        //标记被感染的点
        for(auto x:initial){
            flag[x]=1;
        }
        build(len);
        //先把没有感染的合并
        for(int i=0;i<len;i++){
            for(int j=0;j<l;j++){
                if(graph[i][j]==1&&!flag[i]&&!flag[j]){
                    merge(i,j);
                }
            }
        }
        //对每一个感染的节点，统计他的集合的个数
        
        for(auto x:initial){
            for(int i=0;i<len;i++){
                if(i!=x&&!flag[i]&&graph[i][x]==1){
                    int fn=find(i);
                    if(infect[fn]==-1){
                        infect[fn]=x;
                    }
                    else if(infect[fn]!=-2&&infect[fn]!=x){
                        infect[fn]=-2;
                    }
                }
            }
        }
        for(int i=0;i<len;i++){
            if(i==find(i)&&infect[i]>=0){
                cnt[infect[i]]+=size[i];
            }
        }
        sort(initial.begin(),initial.end());

        int ans=initial[0];
        int ma=cnt[ans];

        for(auto x:initial){
            if(cnt[x]>ma){
                ma=cnt[x];
                ans=x;
            }
        }
        return ans;
    }
};