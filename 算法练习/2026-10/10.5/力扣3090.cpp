class Solution {
public:
    int maximumLengthSubstring(string s) {
        int len=s.size();
        int ans=0;
        int l=0,r=0;
        unordered_map<char,int>mp;
        while(r<len){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};