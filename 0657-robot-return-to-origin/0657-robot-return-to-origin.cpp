class Solution {
public:
    bool judgeCircle(string moves) {
        int le = moves.size();
        int up = 0, ri = 0;
        for(int i=0; i<le; i++) {
            if(moves[i] == 'U') up++;
            else if (moves[i] == 'D') up--;
            else if (moves[i] == 'R') ri++;
            else ri--;
        }
        return up == 0 && ri == 0;
    }
};