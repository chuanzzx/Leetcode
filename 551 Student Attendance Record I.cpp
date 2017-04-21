class Solution {
public:
    bool checkRecord(string s) {
        int cntA = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'L' && s[++i] == 'L' && s[++i] == 'L')
                return false;
            if (s[i] == 'A')
                ++cntA;
        }
        return (cntA < 2);
    }
};