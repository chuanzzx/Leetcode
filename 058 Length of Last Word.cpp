class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        bool firstWord = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                if (firstWord) {
                    cnt = 1;
                    firstWord = 0;
                }
                else
                    cnt++;
            }
            else
                firstWord = 1;
        }
        return cnt;
    }
};