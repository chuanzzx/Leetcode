class Solution {
public:
    int mySqrt(int x) {
        //like binary search
        if (x <= 1)
            return x;
        
        int left = 1, right = x, mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (x / mid > mid)
                left = mid + 1;
            else if (x / mid < mid)
                right = mid;
            else
                return mid;
        }
        return left - 1;
        
    }
};