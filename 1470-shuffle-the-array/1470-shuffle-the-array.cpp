class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size(),0);
        int leftPart = 0;
        int rightPart = n;
        int k = 0;
        while(leftPart != n || rightPart != nums.size()){
            ans[k] = nums[leftPart];
            ans[k+1] = nums[rightPart];
            leftPart++;
            rightPart++;
            k += 2;
        }
        return ans;
    }
};