class Solution {
public:
    int len,l;
    vector<int>f;
    void build(int x){
        for(int i=0;i<x;i++){
            f[i]=i;
        }
    }
    int find(int x){
        return f[x]==x?x:f[x]=find(f[x]);
    }
    void merge(int x,int y){
        f[find(x)]=find(y);
    }
    int numSimilarGroups(vector<string>& strs) {
        len=strs.size();
        l=strs[0].size();
        f.resize(len);
        int ans=len;
        build(len);
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(find(i)!=find(j)){
                    int diff=0;
                    for(int k=0;k<l&&diff<3;k++){
                        if(strs[i][k]!=strs[j][k]){
                            diff++;
                        }
                    }
                    if(diff==0||diff==2){
                        ans--;
                        merge(i,j);
                    }
                }
            }
        }
        return ans;
    }
};