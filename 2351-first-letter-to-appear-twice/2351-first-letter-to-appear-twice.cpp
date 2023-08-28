class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> sets;
        char answer;
        for(char w: s){
            if(sets.find(w) == sets.end()){
                sets.insert(w);
            }
            else{
                answer = w;
                break;
            }
        }
        return answer;
    }
};