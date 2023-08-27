class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int pos = -1;
        for(int i=0;i<word.length();i++){
            st.push(word[i]);
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