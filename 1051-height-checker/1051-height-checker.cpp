class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> checker;
        checker = heights;
        sort(checker.begin(),checker.end());
        int ans = 0;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != checker[i])
                ans++;
        }
        return ans;
    }
};