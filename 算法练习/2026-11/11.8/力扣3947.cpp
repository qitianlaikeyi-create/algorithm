class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int len=items.size();
        vector<int>gain(len+1);
        vector<int>num(len+1);
        for(int i=0;i<len;i++){
            num[items[i][0]]++;
        }
        for(int i=1;i<=len;i++){
            for(int j=i;j<=len;j+=i){
                gain[i]+=num[j];
            }
            gain[i]--;
        }
        sort(items.begin(),items.end(),[](auto &x,auto &y){
            return x[1]<y[1];
        });
        int ans=0;
        int mi=items[0][1];
        for(int i=0;i<len;i++){
            int x=items[i][0];
            int y=items[i][1];
            if(y>2LL*mi)break;
            int cur=min(gain[x],budget/y);
            ans+=2LL*cur;
            budget-=y*cur;
        }
        ans+=budget/mi;
        return ans;
    }
};