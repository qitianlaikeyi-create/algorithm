class Solution {
public:
    string decodeString(string s) {
        string ans;
        int len=s.size();
        int num=0;
        stack<int>nums;
        stack<string>sum;
        for(int i=0;i<len;i++){
            if(s[i]>='0'&&s[i]<='9'){
                num=num*10+s[i]-'0';
            }
            else if(s[i]=='['){
                nums.push(num);
                num=0;
                sum.push(ans);
                ans="";
            }
            else if(s[i]==']'){
                int x=nums.top();
                nums.pop();
                string s1=sum.top();
                sum.pop();
                while(x--){
                    s1+=ans;
                }
                ans=s1;
            }
            else ans+=s[i];
        }
        return ans;
        }
};