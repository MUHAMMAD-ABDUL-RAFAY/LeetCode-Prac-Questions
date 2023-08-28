class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size() != s.length())
            return false;
        int k = 0;
        while(k < words.size()){
            if(words[k][0] != s[k])
                return false;
            k++;
        }
        return true;
    }
};