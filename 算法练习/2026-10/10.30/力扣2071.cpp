class Solution {
public:
bool check(int k,vector<int>&tasks,vector<int>&workers,int pills,int strength){
    deque<int>dq;
    int i=0;
    int m=workers.size();
    for(int j=m-k;j<m;j++){
        while(i<k&&tasks[i]<=workers[j]+strength){
            dq.push_back(tasks[i]);
            i++;
        }
        if(dq.empty())return 0;
        if(dq.front()<=workers[j]){
            dq.pop_front();
        }
        else{
            if(!pills)return 0;
            pills--;
            dq.pop_back();
        }
    }
    return 1;
}

    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        int ml=min(tasks.size(),workers.size());
        sort(tasks.begin(),tasks.end());
        sort(workers.begin(),workers.end());
        int l=0,r=ml;
        while(l<r){
            int mid=(l+r+1)/2;
            if(check(mid,tasks,workers,pills,strength)){
                l=mid;
            }
            else{
                r=mid-1;
            }
        }
        return l;
    }
};