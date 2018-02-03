class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> valid;
        int sum = 0;
        for (int i = 0; i < ops.size(); ++i) {
            if (ops[i] == "D") {
                if (!valid.empty()) {
                    valid.push (valid.top() * 2);
                    sum += valid.top();
                }
            }
            else if (ops[i] == "C") {
                if (!valid.empty()) {
                    sum -= valid.top();
                    valid.pop();
                }
            }
            else if (ops[i] == "+") {
                int v1 = 0, v2 = 0;
                if (!valid.empty()) {
                    v1 = valid.top();
                    valid.pop();
                }
                if (!valid.empty()) {
                    v2 = valid.top();
                }
                valid.push (v1);
                valid.push (v1 + v2);
                sum += valid.top();
            }
            else {
                valid.push (stoi (ops[i])); // convert string to int
                sum += valid.top();
            }
        }
        return sum;
    }
};