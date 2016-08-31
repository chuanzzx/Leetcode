class Solution {
public:
    int singleNumber(vector<int>& nums) { // XOR (1,1) = 0, (1,0) = 1, (0,0) = 0 
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
            sum ^= nums[i];
        return sum;
    }
};