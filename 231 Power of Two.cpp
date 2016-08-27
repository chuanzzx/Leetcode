class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        unsigned int powerOf2 = 1, num = n;
        while (powerOf2 <= num) {
            if (powerOf2 == num)
                return true;
            powerOf2 *= 2;   
        }
        return false;
    }
};