class Solution {
public:
    string reversePrefix(string word, char ch) {
        int len=word.size();
        for(int i=0;i<len;i++){
            if(word[i]==ch){
            reverse(word.begin(),word.begin()+i+1);
            break;
            }
        }
        return word;
    }
};