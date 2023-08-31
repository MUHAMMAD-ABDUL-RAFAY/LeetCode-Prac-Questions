class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> umap;
        set<int> s;
        
        for(int i=0;i<arr.size();i++){
            if(umap.find(arr[i]) == umap.end())
                umap[arr[i]] = 1;
            else
                umap[arr[i]]+= 1;
        }
        for(auto u:umap){
            if(s.find(u.second) == s.end())
                s.insert(u.second);
            else
                return false;
        }
        return true;
    }
};