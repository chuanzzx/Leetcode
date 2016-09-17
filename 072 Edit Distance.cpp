class Solution {
public:
    int minDistance(string word1, string word2) {
        int DP_i = word1.size() + 1, DP_j = word2.size() + 1;
        int ** DP = new int * [DP_i];
        Initialize (DP, DP_i, DP_j);
        
        // run DP table
        for (int i = 1; i < DP_i; i++) { 
            for (int j = 1; j < DP_j; j++) {
                int rep = (word1[i - 1] == word2[j - 1]) ? DP[i - 1][j - 1] : (DP[i - 1][j - 1] + 1);
                DP[i][j] = minChoice (DP[i][j - 1] + 1, DP[i - 1][j] + 1, rep);
            }
        }
        return DP[DP_i - 1][DP_j - 1];
    }
    
private:
    void Initialize (int ** DP, int DP_i, int DP_j) { // initial value setting
        for (int i = 0; i < DP_i; i++) {
            DP[i] = new int [DP_j];
            DP[i][0] = i;
        }
        for (int j = 1; j < DP_j; j++)
            DP[0][j] = j;
    }
    
    int minChoice (int ins, int del, int rep) { // ins: → ; del: ↓ ; rep: ↘
        return ((del < rep) ? (del < ins ? del : ins) : (rep < ins ? rep : ins));
    }
};