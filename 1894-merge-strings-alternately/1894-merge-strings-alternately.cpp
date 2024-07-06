class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string ans = "";
        while(i < word1.length() && j < word2.length()){
            ans = ans + string(1,word1[i]) + string(1,word2[j]);
            i++;
            j++;
        }
        if(i < word1.length()){
            ans += word1.substr(i,word1.length());
        }
        else{
            ans += word2.substr(j,word2.length());
        }
        return ans;
        
    }
};