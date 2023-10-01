class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<int> st;
        for(char ch: allowed){
            st.insert(ch);
        }
        int count = 0;
        for(auto word: words){
            bool flag = true;
            for(char wr: word){
                if(st.find(wr) == st.end()){
                    flag = false;
                    break;
                }
            }
            if(flag)
                count++;
        }
        return count;
    }
};