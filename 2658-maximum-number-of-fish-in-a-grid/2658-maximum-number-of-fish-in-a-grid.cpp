class Solution {
public:
    const int directions[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int dfs(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& visited) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || visited[r][c] || grid[r][c] == 0) {
            return 0;
        }
        visited[r][c] = true;
        int fish = grid[r][c];
        for (auto dir : directions){
            int newRow = r + dir[0]; 
            int newCol = c + dir[1];
            fish += dfs(newRow, newCol, grid, visited);
        }
        return fish;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int maxFish = 0;
        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                if (grid[r][c] > 0) {
                    vector<vector<bool>> visited(m, vector<bool>(n, false));
                    maxFish = max(maxFish, dfs(r, c, grid, visited));
                }
            }
        }
        return maxFish;
    }
};