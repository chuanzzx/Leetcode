class Solution {
public:
    int reverse(int x) {
        int res = 0, tmp = 0, neg = 1;
        
        if (x < 0) {
            x *= -1;
            neg = -1;
        }
        
       while (x > 0 && tmp <= res) {
            tmp = res;
            res = res * 10 + (x % 10);
            x /= 10;
        }
        
        if (res / 10 != tmp)
            return 0;
        else
            return (res * neg);
    }
};