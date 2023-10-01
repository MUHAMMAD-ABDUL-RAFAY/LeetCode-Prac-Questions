class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        string word = "";
        for(char wr: s){
            if(wr == ' '){
                reverse(word.begin(),word.end());
                result += word + " ";
                word = "";
            }
            else{
                word += wr;
            }
        }
        reverse(word.begin(),word.end());
        result += word;
        word = "";
        return result;
    }
};