class Solution {
public:

    int edgeSquare(vector<int> bars) {
        int edge = 2;
        int ans = 2;
        sort(bars.begin(), bars.end());
        for(int i=0; i < bars.size()-1; i++ ) {
            if(bars[i+1] - bars[i] == 1) {
                edge ++;
            }
            else {
                ans = max(ans, edge);
                edge = 2;
            }
        }
        return max(ans, edge);
    }
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int r = min(edgeSquare(hBars), edgeSquare(vBars));
        return r * r;
    }
};