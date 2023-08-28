class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int answer = 0;
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "+"){
                int element1 = s.top();
                s.pop();
                int element2 = s.top();
                s.pop();
                int element3 = element1 + element2;
                s.push(element2);
                s.push(element1);
                s.push(element3);
            }
            else if(operations[i] == "D"){
                int element = s.top();
                s.push(element*2);
            }
            else if(operations[i] == "C"){
                s.pop();
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        if(s.empty()){
            answer = 0;
        }
        else{
            while(!s.empty()){
                answer += s.top();
                s.pop();
            }
        }
        return answer;
    }
};