class Solution {
public:
    bool isSubsequence(string s, string t) {
    	//using not .size() function but local variable will get faster (85ms->79ms)
        int i = 0, j = 0, sSize = s.size(), tSize = t.size(); 
        while (i < sSize && j < tSize) {
            if (s[i] == t[j])
                i++;
            j++;
        }
        return (i == sSize);
    }
};