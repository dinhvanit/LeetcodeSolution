class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int lsum = 0, rsum = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++){
            rsum += nums[i];
        }
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) {
                if(lsum == rsum) {
                    ans += 2;
                }
                else if (lsum - rsum == 1 || rsum - lsum == 1) {
                    ans += 1;
                }
            }
            else {
                lsum += nums[i];
                rsum -= nums[i];
            }
        }
        return ans;
    }
};