class Solution {
public:
    int minimumLength(string s) {
        int len=s.size();
        int l=0,r=len-1;
        int ans=0;
        while(l<r&&s[l]==s[r]){
            char c=s[l];
            while(l<=r&&s[l]==c){
                l++;
            }
            while(l<=r&&s[r]==c){
                r--;
            }
        }
        ans=r-l+1;
    return ans;
    }
};