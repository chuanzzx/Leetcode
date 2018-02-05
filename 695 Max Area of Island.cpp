class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] != 0) {
                    maxArea = max (maxArea, visit (grid, i, j));
                }
            }
        }
        return maxArea;
    }
    
    int visit (vector<vector<int>>& grid, int i, int j) {
        if (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] != 0) {
            grid[i][j] = 0;
            return 1 + visit (grid, i + 1, j) 
                     + visit (grid, i - 1, j)
                     + visit (grid, i, j + 1)
                     + visit (grid, i, j - 1);
        }
        return 0;
    }
};