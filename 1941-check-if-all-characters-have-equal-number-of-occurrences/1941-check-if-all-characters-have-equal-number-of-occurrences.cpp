class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> umap;
        for(char w: s){
            if(umap.find(w) == umap.end()){
                umap.insert({w,0});
            }
            else{
                umap[w] += 1;
            }
        }
        int prev = -1;
        for(auto i:umap){
            if(prev == -1){
                prev = i.second;
            }
            else{
                if(prev != i.second)
                    return false;
                else
                    prev = i.second;
            }
        }
        return true;
    }
};