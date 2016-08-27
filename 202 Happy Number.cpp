class Solution {
public:
    bool isHappy(int n) {
        if (HappyNumber (n) == 1)
            return true;
        else
            return false;
    }
private:
    int HappyNumber (int n) {
        if (n == 1 || n == 7)
            return 1;
        else if (n < 10)
            return n;
        int sum = 0;
        while (n > 0) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return HappyNumber (sum);
    }

};