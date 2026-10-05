class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.size();
        int ans=0;
        int sum=0;
        int l=0;
        int r=0;
        unordered_map<char,int>mp;
        while(r<len){
            while(mp[s[r]]!=0){
                mp[s[l]]=0;
                l++;
            }
            mp[s[r]]=1;
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
        }
};