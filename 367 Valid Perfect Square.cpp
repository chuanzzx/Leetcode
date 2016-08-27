class Solution { 
public:
    bool isPerfectSquare(int num) { // iterative version
        int Low = 1, High = num, Mid = 0, ans = 0;
        while (Low <= High) {
            if (((High + Low) / 2) == Mid)
                return false;
            else
                Mid = (High + Low) / 2;
            ans = num / Mid;
            
            if (Mid > ans)
                High = Mid;
            else if (Mid < ans)
                Low = Mid;
            else if (num % ans == 0) //bingo!
                return true;
        }
        return false;
    }
};