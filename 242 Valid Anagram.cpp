class Solution {
public:
    bool isAnagram(string s, string t) {
        int letterS[26] = {0}, letterT[26] = {0};
        
        if (s.size() != t.size())
            return false;
        for (int i = 0; i < s.size(); i++) {
            letterS[s[i] - 97]++;
            letterT[t[i] - 97]++;
        }
        
        for (int i = 0; i < 26; i++)
            if (letterS[i] != letterT[i])
                return false;
        return true;
    }
};