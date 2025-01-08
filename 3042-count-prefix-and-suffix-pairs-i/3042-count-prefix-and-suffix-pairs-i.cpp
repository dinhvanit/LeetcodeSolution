class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (words[j].rfind(words[i], 0) == 0 && 
                    words[j].substr(words[j].size() - words[i].size()) == words[i]) {
                    count++;
                }
            }
        }
        return count;
    }
};