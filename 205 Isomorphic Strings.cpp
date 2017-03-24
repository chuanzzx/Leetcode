class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map1[128] = {0}, map2[128] = {0};
        char change[128] = {' '};
        for (int i = 0; i < s.size(); ++i) {
            change[s[i]] = t[i];
            if (++map1[s[i]] != ++map2[t[i]])
                return false;
        }
        for (int i = 0; i < s.size(); ++i) {
            char tmp = change[s[i]];
            swap (s[i], tmp);
        }
        return (s == t);
    }
};