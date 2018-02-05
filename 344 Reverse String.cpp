class Solution {
public:
    string reverseString(string s) {
        int n = s.size() / 2;
        int i = 0; 
        int j = s.size() - 1;
        while (i < n) {
            swap (s[i], s[j]);
            ++i;
            --j;
        }
        return s;
    }
};