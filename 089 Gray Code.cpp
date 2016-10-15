class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        
        if (n < 0)
            return res;
        res.push_back (0);
        if (n == 0)
            return res;
        res.push_back (1);
        
      	int digitBase = 2;
    	for (int digit = 1; digit < n; digit++) {
    		int lastRoundSize = res.size();
    		for (int i = 0; i < lastRoundSize; i++) { //gc(3 bits) = gc(2) + ('1' + reverse_gc(2))
    			res.push_back (digitBase + res[lastRoundSize - 1 - i]);
    		}
    		digitBase = digitBase << 1; //shift 1 bit to the more sig side in binary
    	}
        return res;
    }
};