class Solution {
public:
    string longestWord(vector<string>& words) {
        if (words.size() == 0) {
            return "";
        }

        sort (words.begin(), words.end()); // lexicographically
        unordered_set<string> table;
        string basic = "";
        table.insert (basic);

        for (int i = 0; i < words.size(); ++i) {
            int n = words[i].size();
            if (table.count (words[i].substr (0, n - 1))) { // valid 
                table.insert (words[i]); // keep tracking this word
                if (n > basic.size()) // max & valid word
                    basic = words[i];
            }
        }
        return basic;
    }
};