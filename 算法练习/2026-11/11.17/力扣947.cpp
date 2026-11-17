class Solution {
public:
    int f[1005];
    void build(int x){
        f[x]=x;
    }
    void merge(int x,int y){
        f[find(x)]=find(y);
    }
    int find(int x){
        return f[x]==x?x:f[x]=find(f[x]);
    }
    int removeStones(vector<vector<int>>& stones) {
        int ans=stones.size();
        int n=stones.size();
        unordered_map<int,int>rowmp;
        unordered_map<int,int>colmp;
        for(int i=0;i<n;i++){
            build(i);
        }
        for(int i=0;i<n;i++){
            if(rowmp.count(stones[i][0])){
                if(find(i)!=find(rowmp[stones[i][0]])){
                    merge(i,rowmp[stones[i][0]]);
                    ans--;
                }
            }
            else{
                rowmp[stones[i][0]]=i;
            }

            if(colmp.count(stones[i][1])){
                if(find(i)!=find(colmp[stones[i][1]])){
                    merge(i,colmp[stones[i][1]]);
                    ans--;
                }
            }
            else{
                colmp[stones[i][1]]=i;
            }
        }
        return n-ans;
    }
};