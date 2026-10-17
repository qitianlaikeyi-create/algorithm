class MinStack {
public:
    stack<pair<int,int>>st;
    MinStack() {
        st.push({0,INT_MAX});
    }
    
    void push(int value) {
        st.push({value,min(getMin(),value)});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */