class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>dq;
int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        int len=nums.size();
        for(int i=0;i<len;i++){
            dq.push(nums[i]);
            if(dq.size()>k)
            dq.pop();
        }
    }
    
    int add(int val) {
        dq.push(val);
        int x=0;
        if(dq.size()>k){
            dq.pop();
        }
        return dq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */