class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> compare(heights);
        sort(compare.begin(),compare.end());
        int count = 0;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != compare[i])
                count++;
        }
        return count;
        
    }
};