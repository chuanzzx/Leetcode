class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res = digits;
        res.push_back (0);
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] == 9) {
                digits[i] = 0;
                res[i + 1] = digits[i];
            } else {
                digits[i] += 1;
                return digits;
            }
        }
        res[0] = 1;
        return res;
    }
};