class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int len=deck.size();
        deque<int>dq;
        sort(deck.begin(),deck.end());
        for(int i=len-1;i>=0;i--){
            if(!dq.empty()){
                dq.push_front(dq.back());
                dq.pop_back();
            }
            dq.push_front(deck[i]);
        }
        vector<int>ans;
        for(auto x:dq){
            ans.push_back(x);
        }
        return ans;
    }
};