class Solution {
public:
    bool checkRecord(string s) {
        int Acount = 0;
        int Lcount = 0;
        for(char ch: s){
            if(ch == 'A'){
                Lcount = 0;
                Acount++;
            }
            else if(ch == 'L'){
                Lcount++;
                if(Lcount == 3){
                    break;
                }   
            }
            else{
                Lcount = 0;
            }
        }
        if(Acount >= 2 || Lcount == 3)
            return false;
        else
            return true;
    }
};