class Solution {
public:
    bool isUgly(int num) {
    
        if (num > 0) {
            int div[3] = {2, 3, 5}, i = 0;
            while (i < 3) {
                if (num % div[i] == 0)
                    num = num / div[i];
                else
                    i++;
            }
            if (num == 1) 
                return true;
            else
                return false;
        }else{
            return false;
        }
    }
};