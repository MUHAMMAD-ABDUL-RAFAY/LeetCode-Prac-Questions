class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int valid = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'R'){
                valid++;
            }
            else{
                valid--;
            }
            if(valid == 0){
                count++;
                valid = 0;
            } 
        }
        return count;
    }
};