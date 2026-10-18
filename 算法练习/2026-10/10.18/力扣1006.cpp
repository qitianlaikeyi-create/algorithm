class Solution {
public:
    int clumsy(int n) {
        stack<int>st;
        int index=0;
        st.push(n);
        n--;
        while(n>0){
            if(index%4==0){
                st.top()*=n;
            }
            else if(index%4==1){
                st.top()/=n;
            }
            else if(index%4==2){
                st.push(n);
            }
            else st.push(-n);
            n--;
            index++;
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};