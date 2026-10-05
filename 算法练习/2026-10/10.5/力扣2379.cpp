class Solution {
public:
    int minimumRecolors(string blocks, int k) {
         int len=blocks.size();
         int ans=110;
         int sum=0;
         for(int r=0;r<len;r++){
            int l=r-k+1;
            if(blocks[r]=='W')sum++;
            if(l<0){
                continue;
            }
            ans=min(ans,sum);
            if(blocks[l]=='W')sum--;
         }
         return ans;
    }
};