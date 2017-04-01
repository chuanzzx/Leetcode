class Solution {
public:
    int minMoves(vector<int>& nums) {
        int Min = INT_MAX, count = 0;
        for (int i = 0; i < nums.size(); ++i)
            Min = min (Min, nums[i]);
        for (int i = 0; i < nums.size(); ++i)
            count += (nums[i] - Min);
        return count;
    }
};