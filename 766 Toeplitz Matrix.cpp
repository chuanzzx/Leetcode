class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size() - 1; ++i) {
            if (!isToeplitzVec (matrix[i], matrix[i + 1])) {
                return false;
            }
        }
        return true;
    }
    
    bool isToeplitzVec (vector<int> &v1, vector<int> &v2) {
        for (int i = 0; i < v1.size() - 1; ++i) {
            if (v1[i] != v2[i + 1]) {
                return false;
            }
        }
        return true;
    }
};