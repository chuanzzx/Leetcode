class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        if (k == 1) {
            return true;
        }
        int n = nums.size(), sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum % k != 0) {
            return false;
        }

        bool visited[n + 1] = {false};
        int targetSum = sum / k;
        return dfs (nums, visited, 0, 0, targetSum, k - 1);
    }
    
    bool dfs (vector<int>& nums, bool* visited, int begin, int currSum, int& targetSum, int targetCnt) {
        if (targetCnt <= 0) {
            return true;
        } else if (currSum == targetSum) { // find one subset
            return dfs (nums, visited, 0, 0, targetSum, targetCnt - 1);
        }
        else {
            for (int i = begin; i < nums.size(); i++) {
                if (!visited[i]) { // white
                    visited[i] = true; // gray
                    if (dfs (nums, visited, i + 1, currSum + nums[i], targetSum, targetCnt)) { // take i
                        return true;  
                    } else { // not take i
                        visited[i] = false; // release 
                    }
                }
            }
            return false;
        }
    }
};