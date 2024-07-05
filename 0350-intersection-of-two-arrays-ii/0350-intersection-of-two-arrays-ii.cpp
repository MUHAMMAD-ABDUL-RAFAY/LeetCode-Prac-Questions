class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        vector<int> ans;
        for(int n : nums1){
            if(umap.find(n) == umap.end()){
                umap[n] = 1;
            }
            else{
                umap[n]++;
            }
        }
        for(int n : nums2){
            if(umap.find(n) != umap.end() && umap[n] != 0){
                ans.push_back(n);
                umap[n]--;
            }
        }
        return ans;
    }
};