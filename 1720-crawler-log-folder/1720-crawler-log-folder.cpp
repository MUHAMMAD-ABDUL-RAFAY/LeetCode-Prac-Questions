class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for(string log : logs){
            if(log == "./"){
                continue;
            }
            else if(log == "../"){
                ans == 0 ? 0 : ans--;
            }
            else{
                ans++;
            }
        }
        return ans;
        
    }
};