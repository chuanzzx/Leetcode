class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //using binary search
        vector<int> res(2, 0);
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            if (numbers[left] + numbers[right] < target) {
                left++;
            } else if (numbers[left] + numbers[right] > target) {
                right--;
            } else { //(numbers[left] + numbers[right] == target) {
                res[0] = left + 1;
                res[1] = right + 1;
                break;
            }
        }
        return res;
    }
};