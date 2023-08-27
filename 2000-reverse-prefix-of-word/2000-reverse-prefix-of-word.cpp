class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        bool flag = false;
        for(int i=0;i<word.length();i++){
            st.push(word[i]);
            if(ch == word[i]){
                flag = true;
                break;
            }
        }
        int k = 0;
        if(flag){
            while(!st.empty()){
                word[k] = st.top();
                st.pop();
                k++;
            }    
        }
        return word;
    }
};