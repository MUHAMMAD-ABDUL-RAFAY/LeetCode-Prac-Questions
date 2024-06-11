class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> umap;
        vector<int> ans;
        
        for(int n: arr1){
            if(umap.find(n) != umap.end()){
                umap[n]++;
            }
            else{
                umap[n] = 1;
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int n: arr2){
            while(umap[n] != 0){
                ans.push_back(n);
                umap[n]--;
            }
        }
        
        for(int n: arr1){
            if(umap[n] != 0){
                ans.push_back(n);
            }
        }
        
        return ans;
        
    }
};