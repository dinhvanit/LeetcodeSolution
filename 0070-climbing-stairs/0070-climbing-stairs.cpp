class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        int dp1 = 1, dp2 = 1;
        for (int i = 2; i <= n; ++i) {
            int current = dp1 + dp2;
            dp1 = dp2;
            dp2 = current;
        }

        return dp2;
    }
};