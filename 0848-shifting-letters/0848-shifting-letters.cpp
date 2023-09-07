class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long shft = 0;
        for(int i=shifts.size()-1;i>=0;i--){
            shft += shifts[i];
            s[i] = ((int(s[i]) - 97 + shft) % 26) + 97;
        }
        return s;
    }
};