class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int s1 = s.size(), s2 = p.size();
        if (s1 < s2)
            return res;
        
        vector<int> c1(26,0), c2(26,0);
        for (int i = 0; i < s2; i++) {
            c2[p[i] - 'a']++;
        }
        
        for (int i = 0; i < s1; i++) {
            c1[s[i] - 'a']++;
            int start = i - s2 + 1;
            if (start - 1 >= 0)
                c1[s[start - 1] - 'a']--;
            if (c1 == c2) // vector could be "==" directly
                res.push_back (start);
        }
        return res;
    }
};