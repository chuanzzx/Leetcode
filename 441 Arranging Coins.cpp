class Solution {
public:
    int arrangeCoins(int n) {
        int i = 0;
        long int sum = 0;
        while (sum <= n) {
            sum += (++i);
        }
        return (i - 1);
    }
};