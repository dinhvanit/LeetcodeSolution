class Solution {
public:
    void computeLPS(string& pattern, int m, vector<int>& lps) {
        int len = 0;
        int i = 1;
        lps[0] = 0;

        while (i < m) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        int m = needle.size();
        int n = haystack.size();
        
        if (m == 0) return 0;
        vector<int> lps(m, 0);
        computeLPS(needle, m, lps);
        int i = 0;
        int j = 0;
        while (i < n) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
            }
            if (j == m) {
                return i - j;
            } else if (i < n && haystack[i] != needle[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return -1;
    }
};