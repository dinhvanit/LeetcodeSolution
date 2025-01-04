class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int result = 0;
        for (char c = 'a'; c <= 'z'; ++c) {
            int first = -1, last = -1;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == c) {
                    if (first == -1) first = i;
                    last = i;
                }
            }
            if (first != -1 && last != -1 && first < last) {
                set<char> middle_chars;
                for (int i = first + 1; i < last; ++i) {
                    middle_chars.insert(s[i]);
                }
                result += middle_chars.size();
            }
        }
        return result;
    }
};