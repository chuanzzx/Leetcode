class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }
        int sum = 1;
        for (int i = 2; i < sqrt (num); ++i) {
            if (num % i == 0) {
                sum = sum + (num / i) + i;
                if (sum > num) {
                    return false;
                }
            }
        }
        return (sum == num);
    }
};