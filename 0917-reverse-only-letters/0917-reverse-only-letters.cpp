class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if((s[i] - 'a' >= 0 && s[i] - 'a' < 26) || (s[i] - 'A' >= 0 && s[i] - 'A' < 26) ){
                st.push(s[i]);
            }
        }
        for(int i=0;i<s.length();i++){
            if((s[i] - 'a' >= 0 && s[i] - 'a' < 26) || (s[i] - 'A' >= 0 && s[i] - 'A' < 26) ){
                s[i] = st.top();
                st.pop();
            }
        }
        return s;
    }
};