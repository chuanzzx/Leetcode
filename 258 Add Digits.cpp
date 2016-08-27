class Solution {
public:
    int addDigits(int num) {
        
        if (num == 0)
            return 0;
        else {
            int task = num % 9;
            if (task == 0)
                return 9;
            else
                return task;
        }
    }
};