class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int n:nums){
            if(umap.find(n) != umap.end()){
                umap[n]++;
            }
            else{
                umap[n] = 1;
            }
        }
        int sum = 0;
        for(int n: nums){
            if(umap[n] == 1)
                sum += n;
        }
        return sum;
        
    }
};