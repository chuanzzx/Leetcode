class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.empty()) {
            return m * n;
        }
        int minRow = ops[0][0], minCol = ops[0][1];
        for (int i = 0; i < ops.size(); ++i) {
            int row = ops[i][0], col = ops[i][1];
            if (row == 0 || col == 0) {
                continue;
            }
            if (row < minRow) {
                minRow = row;
            }
            if (col < minCol) {
                minCol = col;
            }
        }
        return minRow * minCol;
    }

};