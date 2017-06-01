class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int n = 3; // appear at most twice
        while (n--) {
            for (int i = 0; i < nums.size(); ++i) {
                if ((i != (nums[i] - 1)) && (nums[i] != nums[nums[i] - 1])) {
                    swap (nums[i], nums[nums[i] - 1]);
                }
            }
        }
        for (int i = 0; i < nums.size(); ++i) {
            if ((i != (nums[i] - 1)) && (nums[i] == nums[nums[i] - 1])) {
                res.push_back (nums[i]);
            }
        }
        return res;
    }
};