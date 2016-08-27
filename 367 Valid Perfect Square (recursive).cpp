class Solution {
public:
    bool isPerfectSquare(int num) { // recursive version
        return BinarySearch (1, num, num);
    }
    
private:
    bool BinarySearch (int low, int high, int num) {
        int mid = (low + high) / 2;
        if (low > high)
            return false;
        else if ((num % mid == 0) && (num / mid == mid))
            return true;
        else if (num / mid < mid)
            return BinarySearch (low, mid - 1, num);
        else
            return BinarySearch (mid + 1, high, num);
    }
};