class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        int three = 3, five = 5;
        for (int i = 1; i <= n; i++) {
            if (i == three && i == five) {
                three += 3;
                five += 5;
                res.push_back ("FizzBuzz");
            }
            else if (i == three) {
                three += 3;
                res.push_back ("Fizz");
            }
            else if (i == five) {
                five += 5;
                res.push_back ("Buzz");
            }
            else {
                res.push_back (to_string (i));   
            }
        }
        return res;
    }
};