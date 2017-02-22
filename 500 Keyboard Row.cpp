class Solution { //0ms
public:
    vector<string> findWords(vector<string>& words) {
        string l[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        unordered_map<char, int> key;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < l[i].size(); j++)
                key[l[i][j]] = i;
        }
        vector<string> res;
        for (int i = 0; i < words.size(); i++) {
            bool same = 1;
            int line = key[tolower(words[i][0])]; //using iterator(3ms) is slower.
            for (int j = 1; j < words[i].size(); j++) {
                if (key[tolower(words[i][j])] != line) {
                    same = 0;
                    break;
                }
            }
            if (same)
                res.push_back (words[i]);
        }
        return res;
    }
};