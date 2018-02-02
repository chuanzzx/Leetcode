class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; ++i) {
            if (isSelfDiv (i)) {
                res.push_back (i);
            }
        }
        return res;
    }
    
    bool isSelfDiv (int n) {
        int tmp = n;
        int div = 1;
        while (tmp > 0) {
            div = tmp % 10;
            if (div == 0 || n % div != 0) {
                return false;
            } else {
                tmp /= 10;
            }
        }
        return true;
    }
};