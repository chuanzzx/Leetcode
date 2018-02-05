class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum % 2 != 0) {
            return false;
        }
        // recursion will be TLE -> DP
        int newSum = sum / 2;
        int dp[newSum + 1] = {0};
        dp[0] = true; // sum == 0 -> true
        
        for (int i = 0; i < n; i++) {
            for (int j = newSum; j >= nums[i]; j--) { // nums[i] > j -> nums[i] > sum, out of 2D table
                dp[j] = dp[j] || dp[j - nums[i]]; // not take i or take i
            }
        }
        return dp[newSum];
    }
};