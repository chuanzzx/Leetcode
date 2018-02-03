class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort (nums.begin(), nums.end());
        int v1 = nums[0] * nums[1] * nums[n - 1];
        int v2 = nums[n - 3] * nums[n - 2] * nums[n - 1];
        return (v1 > v2 ? v1 : v2); 
    }
};