class Solution {
public:
    int maxVowels(string s, int k) {
        int len=s.size();
        int ans=0;
        int sum=0;
        //k=r-l+1;
        for(int r=0;r<len;r++){
            int l=r-k+1;
            if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u'){
                sum++;
            }
            if(l<0)continue;
            ans=max(ans,sum);
            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')
            sum--;
        }
        return ans;
    }
};