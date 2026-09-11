//力扣每日一题9.11

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>a;
        int l=digits.size();
        for(int i=0;i<l;i++){
            if(digits[i]!=0){
                for(int j=0;j<l;j++){
                    if(i!=j){
                        for(int k=0;k<l;k++){
                            if(k!=i&&k!=j&&digits[k]%2==0){
                                a.insert(digits[i]*100+digits[j]*10+digits[k]);
                            }
                        }
                    }
                }
            }
        }
        return a.size();
        }
    
};