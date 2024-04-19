class Solution {
public:
    
    void dfs(vector<vector<char>> &grid,int start,int end){
        if(start < 0 || start >= grid.size() || end >= grid[0].size() || end < 0 || grid[start][end] == '0'){
            return;
        }
        if(grid[start][end] == '1'){
            grid[start][end] = '0';
            dfs(grid,start+1,end);
            dfs(grid,start-1,end);
            dfs(grid,start,end-1);
            dfs(grid,start,end+1);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};