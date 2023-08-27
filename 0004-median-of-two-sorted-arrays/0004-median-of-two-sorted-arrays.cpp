class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int newlength = nums1.size() + nums2.size();
        double arr[newlength];
        int n = 0;
        int m = 0;
        int k = 0;
        while((n < nums1.size()) && (m < nums2.size())){
            if(nums1[n] <= nums2[m]){
                arr[k] = nums1[n];
                n++;
                k++;
            }
            else{
                arr[k] = nums2[m];
                m++;
                k++;
            }
        }
        if(m == nums2.size()){
            while(n < nums1.size()){
                arr[k] = nums1[n];
                n++;
                k++;
            }
        }
        if(n == nums1.size()){
            while(m < nums2.size()){
                arr[k] = nums2[m];
                m++;
                k++;
            }
        }
        if(newlength % 2 == 0){
            return double((arr[newlength/2 - 1] + arr[newlength/2]) / 2);
        }
        else{
            return double(arr[newlength/2]);
        }
    }
};