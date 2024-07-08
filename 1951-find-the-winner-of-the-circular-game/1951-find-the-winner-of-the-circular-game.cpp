class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> people(n,0);
        for(int i=0;i<people.size();i++){
            people[i] = i+1;
        }
        int current = 0;
        
        while(people.size() > 1){
            current += (k-1);
            current = (current%(people.size()));
            cout<<people[current]<<" ";
            auto it = find(people.begin(),people.end(),people[current]);
            people.erase(it);
        }
        return people[0];
    }
};