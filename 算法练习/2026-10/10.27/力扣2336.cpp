class SmallestInfiniteSet {
public:
    int cur = 1;
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_set<int> st;

    SmallestInfiniteSet() {
    }

    int popSmallest() {
        if (!pq.empty() && pq.top() < cur) {
            int x = pq.top();
            pq.pop();
            st.erase(x);
            return x;
        }
        return cur++;
    }

    void addBack(int num) {
        if (num < cur && !st.count(num)) {
            pq.push(num);
            st.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */