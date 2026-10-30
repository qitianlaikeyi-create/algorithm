class Solution {
public:
vector<int>f;
void merge(int x,int y){
    f[find(x)]=find(y);
}
int find(int x){
    return f[x]==x?x:f[x]=find(f[x]);
}
int minSwapsCouples(vector<int>& row) {
    int len=row.size();
    int all=len/2;
    f.resize(all);
        for(int i=0;i<all;i++){
            f[i]=i;
        }
        for(int i=0;i<len;i+=2){
            int x=row[i]/2;
            int y=row[i+1]/2;
            if(find(x)!=find(y)){
                merge(x,y);
                all--;
            }
        }
        return len/2-all;
    }
};