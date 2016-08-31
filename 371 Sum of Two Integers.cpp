class Solution {
public:
    int getSum(int a, int b) {
        if (a == 0 || b == 0)
            return (a | b);
        while (b) {
            a = (a ^ b);            // XOR in adder is sum
            b = ((a ^ b) & b) << 1; // AND in adder is carry
        }
        return a;
    }
};