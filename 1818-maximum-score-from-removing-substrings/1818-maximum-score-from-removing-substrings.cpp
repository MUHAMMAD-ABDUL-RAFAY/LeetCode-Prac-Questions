class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string find = x >= y ? "ab": "ba";
        int ans = 0;
        int gain = x >= y ? x : y;
        stack<int> st;
        char first = find[0];
        char second = find[1];
        for(char ch: s){
            if(ch == second && !st.empty() && st.top() == first){
                st.pop();
                ans += gain;
            }
            else{
                st.push(ch);
            }
        }
        s = "";
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        gain = x <= y ? x : y;
        for(char ch: s){
            if(ch == second && !st.empty() && st.top() == first){
                st.pop();
                ans += gain;
            }
            else{
                st.push(ch);
            }
        }
        return ans;





        return ans;  

        
    }
};