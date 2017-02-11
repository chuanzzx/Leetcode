class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k <= 0)
            return false;
        unordered_map<int, int> m; //using unordered_map is faster than map.
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (m[nums[i]] != 0 && ((i + 1 - m[nums[i]]) <= k))
                return true;
            m[nums[i]] = i + 1;
        }
        return false;
    }
};
