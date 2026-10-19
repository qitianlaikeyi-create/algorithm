class FrontMiddleBackQueue {
public:
    deque<int>ans;
    FrontMiddleBackQueue() {
        
    }
    void pushFront(int val) {
        ans.push_front(val);
    }
    
    void pushMiddle(int val) {
        int len=ans.size();
        ans.insert(ans.begin()+len/2,val);
    }
    
    void pushBack(int val) {
        ans.push_back(val);
    }
    
    int popFront() {
        if(!ans.empty()){
            int x=ans.front();
            ans.pop_front();
            return x;
        }else return -1;
    }
    
    int popMiddle() {
        if(!ans.empty()){
            if(ans.size()%2==0){
                int x=ans[ans.size()/2-1];
                ans.erase(ans.begin()+ans.size()/2-1);
                return x;
            }
            else{
                int x=ans[(ans.size()+1)/2-1];
                ans.erase(ans.begin()+(ans.size()+1)/2-1);
                return x;
            }
        }else return -1;
    }
    
    int popBack() {
        if(!ans.empty()){
            int x=ans.back();
            ans.pop_back();
            return x;
        }else return -1;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */