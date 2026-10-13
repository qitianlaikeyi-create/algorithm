class Solution {
public:
    bool isValid(string s) {
        string ans;
        for (char c : s) {
            ans.push_back(c);
            int len = ans.size();
            if (len >= 3 &&
                ans[len - 3] == 'a' &&
                ans[len - 2] == 'b' &&
                ans[len - 1] == 'c') {
                ans.pop_back();
                ans.pop_back();
                ans.pop_back();
            }
        }
        return ans.empty();
    }
};