class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int start = 0;
        int end = size - 1;
        if(size == 1){
            return;
        }
        else{
            while(start < end){
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
        }
    }
};