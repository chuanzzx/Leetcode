class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> res;
        int n = nums.size();
        if (n) {
            bool map[n] = {0};
            for (int i = 0; i < n; i++) {
                map[nums[i] - 1] = 1;
            }
            for (int i = 0; i < n; i++) {
                if (!map[i])
                    res.push_back (i + 1);
            }
        }
        return res;
    }
};