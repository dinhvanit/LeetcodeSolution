class Solution {
public:
    int maxScore(string s) {
        int total1 = 0;
        for (char c : s) {
            if (c == '1') total1++;
        }
        int totalLeft0 = 0;
        int totalRight1 = total1;
        int maxScore = 0;
        for (int i=0; i<s.size()-1; i++){
            if(s[i] == '0' ){
                totalLeft0++;
            }
            else{
                totalRight1--;
            }
            maxScore = max(maxScore, totalLeft0 + totalRight1);
        }
        return maxScore;
    }
};