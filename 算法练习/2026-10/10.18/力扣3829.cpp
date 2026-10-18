class RideSharingSystem {
public:
queue<int>rider;
queue<int>dirver;
unordered_set<int>se;
    RideSharingSystem() {   
    }
    void addRider(int riderId) {
        rider.push(riderId);
        se.insert(riderId);
    }
    
    void addDriver(int driverId) {
        dirver.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        int x,y;
        while(!rider.empty()&&!se.count(rider.front())){
            rider.pop();
        }
        if(!rider.empty()&&!dirver.empty()){
             x=dirver.front();
             y=rider.front();
            dirver.pop();
            rider.pop();
            se.erase(y);
        }
        else{x=-1,y=-1;}
        return{x,y};
    }
    
    void cancelRider(int riderId) {
        if(se.count(riderId)){
            se.erase(riderId);
        }
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */