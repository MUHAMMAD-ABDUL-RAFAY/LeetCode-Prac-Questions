class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = -1;
        for(int i=0;i<word.length();i++){
            if(ch == word[i]){
                pos = i;
                break;
            }
        }
        if(pos != -1)
            reverse(word.begin(),word.begin()+pos+1);
        return word;
    }
};