class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int res = 0;
        for (int i = 0; i <= n; i++)
            res += countDigitNums (i);
        return res;
    }
    
private:
    int countDigitNums (int digit) {
        if (digit == 0)
            return 1;
        int res = 1, choice = 9; //without the most significant bit
        while (--digit)
            res *= choice--;
        return (res * 9); //*msb
    }
};