class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size(), ans = 0, base = 1;
        int * res = new int [n];
        for (int i = n - 1; i >= 0; i--) {
            res[i] = s[i] - 'A' + 1;
            ans += base * res[i];
            base *= 26;
        }
        res = 0;
        delete [] res;
        return ans;
    }
};