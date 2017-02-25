class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        res.push_back (1);
        if (rowIndex == 0)
            return res;
        res.push_back (1);
        if (rowIndex == 1)
            return res;
            
        for (int i = 2; i <= rowIndex; i++) {
            vector<int> temp (1, 1);
            for (int j = 0; j < res.size() - 1; j++) {
                temp.push_back (res[j] + res[j + 1]);
            }
            temp.push_back (1);
            res = temp;
        }
        return res;
    }
};