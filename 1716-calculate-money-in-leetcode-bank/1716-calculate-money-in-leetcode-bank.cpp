class Solution {
public:
    int totalMoney(int n) {
        if(n <= 0)
            return 0;
        int money_inc = 1;
        int money = 0;
        int temp = 1;
        for(int i=1;i<=n;i++){
            money += money_inc;
            money_inc++;
            if(i%7 == 0){
                temp++;
                money_inc = temp;
            }
        }
        return money;
    }
};