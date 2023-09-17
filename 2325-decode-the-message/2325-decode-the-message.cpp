class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> mp;
        int temp = 97;
        for(char ch : key){
            if(ch == ' ')
                continue;
            else if(mp.find(ch) == mp.end()){
                mp[ch] = char(temp);
                temp++;
            }
            else
                continue;
        }
        for(int i=0;i<message.length();i++){
            if(message[i] == ' ')
                continue;
            else
                message[i] = mp[message[i]];
        }
        return message;
    }
};