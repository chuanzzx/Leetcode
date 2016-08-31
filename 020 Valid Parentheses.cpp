class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2)
            return false;
        vector<char> stack;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push_back(s[i]);
            else if ((!stack.empty()) && (s[i] - stack.back() == 1 || s[i] - stack.back() == 2))
                stack.pop_back();    
            else 
                return false;
        }
        if (stack.empty())
            return true;
        else
            return false;
    }
};