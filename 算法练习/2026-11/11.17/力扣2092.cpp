class Solution {
public:
    int f[100005];
    bool flag[100005]={0};
    void merge(int x,int y){
        int fx=find(x);
        int fy=find(y);
        f[fx]=fy;
        flag[fy]|=flag[fx];
    }
    int find(int x){
        return f[x]==x?x:f[x]=find(f[x]);
    }
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        sort(meetings.begin(),meetings.end(),[](vector<int>& a,vector<int>&b){
            return a[2]<b[2];
        });
        for(int i=0;i<n;i++){
            f[i]=i;
        }
        f[0]=firstPerson;
        flag[firstPerson]=1;
        int len=meetings.size();
        for(int i=0;i<len;){
            int l=i;
            while(l<len&&meetings[l][2]==meetings[i][2]){
                l++;
            }
            for(int j=i;j<l;j++){
                if(find(meetings[j][0])!=find(meetings[j][1])){
                    merge(meetings[j][0],meetings[j][1]);
                }
            }
            for(int j=i;j<l;j++){
                if(!flag[find(meetings[j][0])]){
                    f[meetings[j][0]]=meetings[j][0];
                }
                if(!flag[find(meetings[j][1])]){
                    f[meetings[j][1]]=meetings[j][1];
                }
            }
            i=l;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(flag[find(i)]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};