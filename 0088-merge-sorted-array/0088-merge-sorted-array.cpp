class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int indexNums1 = m - 1;
        int indexNums2 = n - 1;
        int indexResult = m + n - 1;
        while (indexNums1 >=0 && indexNums2 >= 0) {
            if (nums1[indexNums1] >= nums2[indexNums2]) {
                nums1[indexResult--] = nums1[indexNums1--];
            }
            else {
                nums1[indexResult--] = nums2[indexNums2--];
            }
        }
        while (indexNums2 >= 0) {
            nums1[indexResult--] = nums2[indexNums2--];
        }
    }
};