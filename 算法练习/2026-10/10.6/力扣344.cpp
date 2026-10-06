class Solution {
public:
    void reverseString(vector<char>& s) {
        int len=s.size();
        int l=0,r=len-1;
        while(l<=r){
            swap(s[l],s[r]);
            l++;r--;
        }
    }
};