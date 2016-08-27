class Solution {
public:
    int climbStairs(int n) { //recursion will be TLE
        int * An = new int [n + 1];
        An[0] = 1;
        An[1] = 1;
        An[2] = 2;
        for (int i = 3; i <= n; i++)
            An[i] = An[i - 1] + An[i - 2];
        return An[n];
    }
};