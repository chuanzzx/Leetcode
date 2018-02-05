class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string res = "";
        for (int i = S.size() - 1; i >= 0; --i) {
            if (S[i] != '-') {
                if (res.size() % (K + 1) == K) { // K + '-' = K + 1
                    res += '-';
                }
                res += ((S[i] > 96) ? S[i] - 32 : S[i]); // to upper
            }
        }
        reverse (res.begin(), res.end());
        return res;
    }
};