class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j-1] < nums[j]){
                    sum += nums[j];
                }
                else{
                    break;
                }
                
            }
            cout<<endl;
            ans = max(sum+nums[i],ans);
        }
        return ans;
        
    }
};