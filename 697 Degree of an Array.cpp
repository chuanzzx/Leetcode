class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> begin, count;
        int output = nums.size(), maxCnt = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (count[nums[i]] == 0) { // new number
                begin[nums[i]] = i;
            }
            if (++count[nums[i]] > maxCnt) {
                output = i - begin[nums[i]] + 1;
                maxCnt = count[nums[i]];
            } else if (count[nums[i]] == maxCnt) { // chose the close one
                if (output > i - begin[nums[i]] + 1) {
                    output = i - begin[nums[i]] + 1;
                }
            }
        }
        return output;
    }   
};