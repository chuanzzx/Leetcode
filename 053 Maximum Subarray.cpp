class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0], nowTotal = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            nowTotal = (nowTotal < 0) ? nums[i] : nowTotal += nums[i];
            if (nowTotal > max)
                max = nowTotal;
        }
        return max;
    }
};