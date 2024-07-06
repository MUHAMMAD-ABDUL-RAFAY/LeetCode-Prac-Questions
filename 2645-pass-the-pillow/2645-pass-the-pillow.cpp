class Solution {
public:
    int passThePillow(int n, int time) {
        int pass = 1;
        int temp = n;
        int ans = 1;
        while(time > 0){
            ans = ans + pass;
            n--;
            time--;
            if(n == 1){
                pass = pass * -1;
                n = temp;
            }
        }
        return ans;


        
    }
};