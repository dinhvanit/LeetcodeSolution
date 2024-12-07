class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1);
        int maxLength = 0;
        int start = 0;
        for (int end = 0; end < s.length(); ++end) {
            if (lastIndex[s[end]] >= start) {
            start = lastIndex[s[end]] + 1;
            }

            lastIndex[s[end]] = end;
            maxLength = max(maxLength, end - start + 1);
        }
    return maxLength;
    }
};