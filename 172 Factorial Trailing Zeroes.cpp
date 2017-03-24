class Solution {
public:
    int trailingZeroes(int n) {
        long int tail = 0, base = 5;
        //only need to count #5
        while (base <= n) {
            tail += n / base;
            base *= 5;
        }
        return tail;
    }
};