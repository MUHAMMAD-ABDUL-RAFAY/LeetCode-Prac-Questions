class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        int i=0;
        if(s.length() == 0 || s.length() == 1){
            return false;
        }
        while(i < s.length()){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stk.push(s[i]);
                i++;
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(stk.empty()){
                    return false;
                }
                else if(s[i] == ')' && stk.top() == '('){
                    stk.pop();
                }
                else if(s[i] == '}' && stk.top() == '{'){
                    stk.pop();
                }
                else if(s[i] == ']' && stk.top() == '['){
                    stk.pop();
                }
                else{
                    return false;
                }
                i++;
            }
        }
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};