class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamDist = 0;
        while (x > 0 || y > 0) {
            int digX = x % 2;
            int digY = y % 2;
            if (digX ^ digY)
                hamDist++;
            x /= 2;
            y /= 2;
        }
        return hamDist;
    }
};