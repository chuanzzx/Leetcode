class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        int tag[nums.size()] = {0};
        int dup = 0, mis = 0;
        for (int i = 0; i < nums.size(); ++i) {
            ++tag[nums[i] - 1];
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (tag[i] == 0) {
                mis = i + 1;
            }
            if (tag[i] > 1) {
                dup = i + 1;
            }
        }
        res.push_back (dup);
        res.push_back (mis);
        return res;
    }
};