class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort (candies.begin(), candies.end());
        int kinds = 1, n = candies.size();
        for (int i = 1; i < n; ++i) {
            if (candies[i - 1] ^ candies[i]) {
                ++kinds;
            }
        }
        return (kinds <= n / 2) ? kinds : (n / 2);
    }
};