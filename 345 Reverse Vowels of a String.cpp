class Solution {
public:
    string reverseVowels(string s) {
        int i = -1, j = s.size();
        while (++i < --j) {
            while (!isVowel(s[i]) && (i < j)) i++;
            while (!isVowel(s[j]) && (i < j)) j--;
            if (i < j) {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
        return s;
    }

    inline bool isVowel (char a) {
        return (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U');
    }

};