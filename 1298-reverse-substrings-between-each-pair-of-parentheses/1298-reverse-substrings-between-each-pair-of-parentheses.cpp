class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if(s[i] == ')'){
                int start = st.top();
                st.pop();
                int end = i;
                reverse(s.begin()+start+1,s.begin()+end);
            }
        }
        for(char ch : s){
            if(ch != '(' && ch != ')'){
                ans += ch;
            }
        }
        return ans;
        
    }
};