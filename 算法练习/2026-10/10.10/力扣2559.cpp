class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int len=words.size();
        vector<int>sum(len+1,0);
        for(int i=0;i<len;i++){
            sum[i+1]=sum[i];
           if((words[i].front()=='a'||words[i].front()=='e'||words[i].front()=='i'||words[i].front()=='o'||words[i].front()=='u')&&(words[i].back()=='a'||words[i].back()=='e'||words[i].back()=='i'||words[i].back()=='o'||words[i].back()=='u')){
            sum[i+1]++;
           }
        }
        vector<int>ans;
        for(auto &q:queries){
            int x=q[0];
            int y=q[1];
            ans.push_back(sum[y+1]-sum[x]);
        }
        return ans;
    }
};