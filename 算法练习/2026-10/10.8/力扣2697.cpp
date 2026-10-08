class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int len=s.size();
        int l=0,r=len-1;
        int ans=0;
        while(l<r){
            if(s[l]!=s[r]){
                ans++;
                if(s[l]>s[r]){
                    s[l]=s[r];
                }
                else s[r]=s[l];
            }
            l++;r--;
        }
        return s;
    }
};