class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        else{
            int temp_x = x;
            long long checker = 0;
            while(x > 0){
                int digit = x % 10;
                checker *= 10;
                checker += digit;
                x = x / 10;
            }
            if(checker > INT_MAX)
                return false;
            if(temp_x == checker)
                return true;
            return false;
                
        }
    }
};