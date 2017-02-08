class Solution {
public:
    int longestPalindrome(string s) {
        int upper[26] = {0}, lower[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                lower[s[i] - 'a']++;
            else
                upper[s[i] - 'A']++;
        }
        int res = 0;
        for (int i = 0; i < 26; i++) {
            res = res + (lower[i] / 2) * 2 + (upper[i] / 2) * 2;
        }
        return (res == s.size() && s.size() % 2 == 0) ? res : res + 1;
    }
};