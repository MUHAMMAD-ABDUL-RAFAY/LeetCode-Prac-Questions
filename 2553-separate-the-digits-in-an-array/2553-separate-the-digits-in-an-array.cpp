class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;
        stack<int> st;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            while(num > 0){
                st.push((num % 10));
                num = num/10;
            }
            while(!(st.empty())){
                answer.push_back(st.top());
                st.pop();
            }
            
        }
        return answer;
    }
};