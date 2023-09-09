class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int k = 0;
        int candy = 1;
        vector<int> answer(num_people,0);
        while(candies != 0){
            if(candies >= candy){
                answer[k] += candy;
                candies -= candy;
            }
            else{
                answer[k] += candies;
                candies = 0;
            }
            candy++;
            k++;
            if(k == answer.size())
                k = 0;
        }
        return answer;
    }
};