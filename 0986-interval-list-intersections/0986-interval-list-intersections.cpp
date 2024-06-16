class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int m = firstList.size();
        int n = secondList.size();
        int i = 0;
        int j = 0;
        
        while(i < m && j < n){
            vector<int> temp;
            
            int start = max(firstList[i][0] , secondList[j][0]);
            int end = min(firstList[i][1] , secondList[j][1]);
            if(start<=end){
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);    
            }
            if(firstList[i][1] < secondList[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
        
        
        
        
    }
};