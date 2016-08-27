class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slot = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (slot < 0 && nums[i] == 0) {
                slot = i;
            } else if (nums[i] != 0 && slot >= 0) {
                nums[slot] = nums[i];
                nums[i] = 0;
                slot++;
            }
        }
    }
};