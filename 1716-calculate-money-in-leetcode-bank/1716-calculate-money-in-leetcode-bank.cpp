class Solution {
public:
    int totalMoney(int n) {
        if(n <= 0)
            return 0;
        int money_inc = 1;
        int money = 0;
        int week_start_money = 1;
        for(int day=1;day<=n;day++){
            money += money_inc;
            money_inc++;
            if(day%7 == 0){
                week_start_money++;
                money_inc = week_start_money;
            }
        }
        return money;
    }
};