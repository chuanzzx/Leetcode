class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1, n = nums.size();
        if (n <= 1) {
            return n;
        }
        nums.push_back (nums[n - 1]);
        for (int i = 1; i <= n; ++i) {
            if (nums[i - 1] != nums[i]) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};