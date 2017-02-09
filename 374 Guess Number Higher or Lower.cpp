// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long long int low = 1, high = n, gNum = 0;
        int gRes = 0;
        do {
            gNum = (low + high) / 2;
            gRes = guess (gNum);
            if (gRes == 1)
                low = gNum + 1;
            else if (gRes == -1)
                high = gNum - 1;
        } while (gRes != 0);
        return gNum;
    }
};