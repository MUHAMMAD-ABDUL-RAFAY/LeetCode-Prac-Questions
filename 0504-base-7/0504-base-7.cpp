class Solution {
public:
    string convertToBase7(int num) {
        string answer;
        bool negFlag = false;
        if(num == 0)
            return "0";
        if(num < 0){
            num *= -1;
            negFlag = true;
        }
        while(num > 0){
            answer = to_string(num%7) + answer;
            cout<<num%7<<" ";
            num = num / 7;
        }
        if(negFlag)
            answer = "-" + answer;
        return answer;
    }
};