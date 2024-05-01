class Solution {
public:
    string reversePrefix(string word, char ch) {
        int lastIndex = -1;
        
        for(int i=0;i<word.length();i++){
            if(word[i] == ch){
                lastIndex = i;
                break;
            }
        }
        if(lastIndex == -1)
            return word;
        else{
            reverse(word.begin(),word.begin() + lastIndex + 1);
            return word;
        }
        
    }
};