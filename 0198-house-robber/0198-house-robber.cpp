class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        int* dp = new int[nums.size()+1];
        dp[0] = 0;
        dp[1] = nums[0];
        for(int i=2;i<=nums.size();i++){
            dp[i] = max(dp[i-1],nums[i-1]+dp[i-2]);
        }
        return dp[nums.size()];
    }
};