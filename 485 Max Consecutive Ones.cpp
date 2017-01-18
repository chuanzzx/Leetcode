class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        nums.push_back(0);
        int start = 0, dist = 0, max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i]) { // is 0
                dist = i - start;
                max = (dist > max) ? dist : max;
                start = i + 1;
            }
        }
        return max;
    }
};