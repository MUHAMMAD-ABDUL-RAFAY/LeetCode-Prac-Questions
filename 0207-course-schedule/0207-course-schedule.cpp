class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses, vector<int>(numCourses));
        vector<bool> visited(numCourses,false);
        vector<int> indegree(numCourses,0);
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            for(int j=0;j<numCourses;j++){
                graph[i][j] = 0;
            }    
        }
        for(auto course: prerequisites){
            graph[course[0]][course[1]] = 1;
            indegree[course[1]]++;
        }
        
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        int count = 0;
        while(!q.empty()){
            int course = q.front();
            count++;
            q.pop();
            for(int i=0;i<numCourses;i++){
                if(graph[course][i] == 1){
                    if(--indegree[i] == 0)
                        q.push(i);
                }
            }
        }
        return count == numCourses;
    }
};