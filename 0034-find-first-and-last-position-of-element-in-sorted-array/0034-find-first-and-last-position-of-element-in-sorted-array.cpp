class Solution {
public:
    int findOccurence(vector<int>& nums,int target,string type){
        int low = 0;
        int high = nums.size() - 1;
        int position = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                if(type == "first"){
                    position = mid;
                    high = mid - 1;
                }
                else{
                    position = mid;
                    low = mid + 1;
                }
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return position;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> answer = {-1,-1};
        int first = findOccurence(nums,target,"first");
        if(first == -1)
            return answer;
        answer[0] = first;
        int last = findOccurence(nums,target,"last");
        answer[1] = last;
        return answer;      
    }
};