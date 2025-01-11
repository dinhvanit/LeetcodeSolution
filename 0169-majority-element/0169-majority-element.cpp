class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int mCount = nums.size() / 2;
        for (int num : nums) {
            freq[num]++;
            if (freq[num] > mCount) {
                return num;
            }
        }
        return -1;
    }
};