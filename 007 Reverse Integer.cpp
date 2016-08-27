class Solution {
public:
    int reverse(int x) {
        long int res = 0;
        bool neg = false;
        
        if (x < 0) {
            x *= -1;
            neg = true;
        }
        
       while (x > 0 && (res < 2147483648)) {
            res = res * 10 + (x % 10);
            x /= 10;
        }
            
        if (res > 2147483647) //x_reverse is overflow
            return 0;
        else if (neg)
            return (int)(res * -1);
        else
            return (int)res;

    }
};