class Checkout {
public:
    deque<int>dq;
    queue<int>q;
    Checkout() {   

    }
    int get_max() {
        if(dq.empty())return -1;
        else return dq.front();
    }
    
    void add(int value) {
        q.push(value);
        while(!dq.empty()&&dq.back()<value){
            dq.pop_back();
        }
        dq.push_back(value);
    }
    
    int remove() {
        if(q.empty()){
            return -1;
        }else {
            if(q.front()==dq.front()){
                dq.pop_front();
            }
            int x=q.front();
            q.pop();
            return x;
        }
    }
};

/**
 * Your Checkout object will be instantiated and called as such:
 * Checkout* obj = new Checkout();
 * int param_1 = obj->get_max();
 * obj->add(value);
 * int param_3 = obj->remove();
 */