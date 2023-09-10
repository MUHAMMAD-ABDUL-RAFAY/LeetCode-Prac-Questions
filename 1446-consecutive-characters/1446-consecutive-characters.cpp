class Solution {
public:
    int maxPower(string s) {
        int localCount = 1;
        int maxPower = 1;
        
        for(int i=0;i<s.length()-1;i++){
            if(s[i] == s[i+1]){
                localCount++;
                maxPower = max(localCount,maxPower);
            }
            else{
                maxPower = max(localCount,maxPower);
                localCount = 1;
            }
        }
        return maxPower;
        
    }
};