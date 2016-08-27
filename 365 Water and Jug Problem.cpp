class Solution {
public:
    bool canMeasureWater(int x, int y, int z) { // gcd(x,y)=g  => g|ax+by
        if (x == z || y == z || z == 0)
            return true;
        else if (x < 0 || y < 0 || ((unsigned int)x + (unsigned int)y < (unsigned int)z))
            return false;
        else if (z % GCD (x, y) == 0) 
            return true;
        else 
            return false;
    }
private:
    int GCD (int a, int b) {
        if (b)
            return GCD (b, a % b);
        else
            return a;
    }
};