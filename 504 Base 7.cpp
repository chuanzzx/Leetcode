class Solution {
public:
    string convertToBase7 (int num) {
        string res = "", sign = "";
        if (num == 0) {
            return "0";
        } else if (num < 0) {
            num *= -1;
            sign = "-";
        }
        while (num > 0) {
            res = to_string (num % 7) + res;
            num /= 7;
        }
        return sign + res;
    }
};