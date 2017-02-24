class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        string res = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            if (res.size() < strs[i].size())
                res.assign (res, 0, strs[i].size() - 1);
            for (int j = 0; j < res.size(); j++)
                if (res[j] ^ strs[i][j]) //not same
                    res.assign (res, 0, j);
        }
        return res;
    }
};