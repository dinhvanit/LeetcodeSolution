class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count = 0;
        long long sum = 0;
        for(int x : nums) {
            sum+=x;
        }
        long long leftSum = 0;
        for(int i=0; i<nums.size()-1; i++) {
            leftSum+=nums[i];
            if (leftSum >= sum - leftSum) {
                count++;
            }
        }
        return count;
    }
};