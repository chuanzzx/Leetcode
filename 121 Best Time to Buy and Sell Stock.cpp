class Solution { //9ms
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) 
            return 0;
        
        vector<int> minRecord, maxRecord;
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i] < min)
                min = prices[i];
            minRecord.push_back (min);
            
            if (prices[prices.size() - 1 - i] > max)
                max = prices[prices.size() - 1 - i];
            maxRecord.push_back (max);
        }
        
        //minRecord size more smaller, maxRecord size more bigger
        int maxProfit = maxRecord[0] - minRecord[minRecord.size() - 1];
        for (int i = 1; i < maxRecord.size(); i++) {
            if ((maxRecord[i] - minRecord[minRecord.size() - 1 - i]) > maxProfit) {
                maxProfit = maxRecord[i] - minRecord[minRecord.size() - 1 - i];
            }
        }

        return ((maxProfit < 0) ? 0 : maxProfit);
    }
};