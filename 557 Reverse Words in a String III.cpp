class Solution {
public:
    string reverseWords(string s) {
        string tmp = "", res = "";
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                res = res + tmp + s[i];
                tmp = "";
            } else {
                tmp = s[i] + tmp;
            }
        }
        return tmp.empty() ? res : res + tmp;
    }
};