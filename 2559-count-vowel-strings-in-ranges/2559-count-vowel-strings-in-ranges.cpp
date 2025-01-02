class Solution {
public:
    bool checkVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    bool checkString(string s){
        return checkVowel(s.front()) && checkVowel(s.back());
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            if (checkString(words[i])) {
                prefix[i + 1] = prefix[i] + 1;
            } else {
                prefix[i + 1] = prefix[i];
            }
        }
        vector<int> result;
        for (auto query : queries) {
            int li = query[0];
            int ri = query[1];
            result.push_back(prefix[ri + 1] - prefix[li]);
        }
        return result;
    }
};