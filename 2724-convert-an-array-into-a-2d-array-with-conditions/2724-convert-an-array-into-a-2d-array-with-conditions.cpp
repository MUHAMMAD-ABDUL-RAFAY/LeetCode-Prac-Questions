class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> umap;
        int maxRows = -1;
        for(int n:nums){
            if(umap.find(n) != umap.end()){
                ++umap[n];
            }
            else{
                umap[n] = 1;
            }
            maxRows = max(maxRows,umap[n]);
        }
        vector<vector<int>> ans(maxRows);
        for(auto it: umap){
            for(int i=0;i<it.second;i++){
                ans[i].push_back(it.first);
            }
        }
        return ans;
    }
};