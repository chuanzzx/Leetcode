class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n1 = nums.size(), n2 = nums[0].size();
        if (r * c != n1 * n2) {
            return nums;
        }
        
        vector<vector<int>> res;
        for (int i = 0; i < r; ++i) {
            vector<int> tmp;
            for (int j = 0; j < c; ++j) {
                int index = i * c + j;
                int idx1 = index / n2;
                int idx2 = index % n2;
                tmp.push_back (nums[idx1][idx2]);
            }
            res.push_back (tmp);
        }
        return res;
    }
};