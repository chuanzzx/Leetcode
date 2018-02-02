class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return cost[0];
        }

        vector<int> tmp (n, 0);
        tmp[0] = cost[0];
        tmp[1] = cost[1];
        for (int i = 2; i < n; ++i) {
            if (tmp[i - 1] < tmp [i - 2]) {
                tmp[i] = tmp[i - 1] + cost[i];
            } else {
                tmp[i] = tmp[i - 2] + cost[i];
            }
        }
        return tmp[n - 1] < tmp[n - 2] ? tmp[n - 1] : tmp[n - 2];
    }
};