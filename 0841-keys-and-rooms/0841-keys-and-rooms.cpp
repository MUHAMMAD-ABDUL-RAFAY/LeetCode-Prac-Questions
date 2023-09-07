class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        vector<bool> visited(rooms.size(),false);
        visited[0] = true;
        int count = rooms.size() - 1;
        for(int i=0;i<rooms[0].size();i++){
            q.push(rooms[0][i]);
        }
            
        while(!q.empty()){
            int r = q.front();
            q.pop();
            if(visited[r] == false){
                visited[r] = true;
                count--;
                for(int i=0;i<rooms[r].size();i++){
                    if(visited[rooms[r][i]] == false)
                        q.push(rooms[r][i]);
                }
                    
            }
        }
        return count == 0;
        
    }
};