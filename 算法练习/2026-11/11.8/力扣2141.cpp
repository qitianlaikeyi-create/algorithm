class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum=0;
        for(auto x:batteries)sum+=x;
        long long l=1,r=sum/n;
        while(l<r){
            long long mid=(l+r+1)/2;
            long long num=mid*n;
            long long cur=0;
            for(auto x:batteries){
                if(x>=mid)cur+=mid;
                else cur+=x;
            }
            if(cur>=num){
                l=mid;
            }
            else {
                r=mid-1;
            }
        }
        return l;
    }
};