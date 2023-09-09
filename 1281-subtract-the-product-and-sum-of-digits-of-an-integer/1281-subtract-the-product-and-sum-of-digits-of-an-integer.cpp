class Solution {
public:
    int subtractProductAndSum(int n) {
        int answer;
        long long product = 1;
        long long sum = 0;
        while(n > 0){
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n = n / 10;
        }
        answer = product - sum;
        return answer;
        
    }
};