class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tmp = nums;
        int n = nums.size();
        k %= n;
        for (int i = 0; i < n; i++) {
            int index = i + (n - k);
            if (index >= n) {
                index %= n;
            }
            nums[i] = tmp[index];
        }
    }
};