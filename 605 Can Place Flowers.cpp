class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0, zero = 0;
        flowerbed.push_back (0);
        for (int i = flowerbed.size() - 1; i >= 0; --i) {
            if (flowerbed[i] == 1) {
                cnt += (zero - 1) / 2;
                zero = 0;
            } else {
                ++zero;
            }
        }
        return (cnt + zero / 2) >= n;
    }
};