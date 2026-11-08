class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int len1=apple.size();
        int len2=capacity.size();
        int ans=0;
        int sum=0;
        int ans1=0;
        sort(capacity.begin(),capacity.end(),greater<int>());
        for(int i=0;i<len1;i++)sum+=apple[i];
        for(int i=0;i<len2;i++){
            ans+=capacity[i];
            ans1++;
            if(ans>=sum){
                break;
            }
        }
        return ans1;
    }
};