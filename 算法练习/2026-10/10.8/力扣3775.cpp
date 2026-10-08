class Solution {
public:
    string reverseWords(string s) {
        int len=s.size();
        int ans=0;
        int l=0,r=0;
        int sum=0;
        bool ok=0;
        for(int i=0;i<len;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')ans++;
            if(s[i]==' '){ok=1;l=i+1;break;}
        }
        if(!ok)return s;
        r=l;
        while(r<len){
            if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u'){
                sum++;
            }
            if(s[r]==' '){
                if(sum==ans){
                    reverse(s.begin()+l,s.begin()+r);
                }
                l=r+1;
                sum=0;
            }
            r++;
        }
        if(sum==ans){
            reverse(s.begin()+l,s.end());
        }
        return s;
    }
};