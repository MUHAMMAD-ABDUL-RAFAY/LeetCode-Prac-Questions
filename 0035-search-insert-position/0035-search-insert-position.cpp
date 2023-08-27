class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    if(nums.size() == 1){
        if(nums[0] >= target)
            return 0;
        else
            return 1;
    }
    else{
    int x = nums[0];
    int y = nums[nums.size()-1];
    int z = nums[nums.size() / 2];
    if(x == target)
        return 0;
    if(y == target)
        return nums.size() - 1;
    if(z == target)
        return nums.size() / 2;
    
    if(z > target){
        int i;
        for(i=0;i<=nums.size() / 2;i++){
            if(nums[i] >= target){
                return i;
            }
        }
        return i-1;
    }
    else{
            int i;
            for(i=(nums.size() / 2) + 1;i<nums.size();i++){
                if(nums[i] >= target){
                return i;
                }
            }
            return nums.size();
        }
    }
}
};