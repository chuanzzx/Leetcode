class Solution { //6ms
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) 
            return 0;
        
        int maxProfit = INT_MIN, min = prices[0];
        for (int i = 1; i < prices.size(); i++) { //only considering about which is the sell day
            if (prices[i] - min > maxProfit)
                maxProfit = prices[i] - min;
            if (prices[i] < min)
                min = prices[i];
        }
        
        return (maxProfit < 0) ? 0 : maxProfit;
    }
};