class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        unordered_map<int,int> rec; //faster than using map
        for (vector<int>::iterator i = n.begin(); i != n.end(); ++i)
            if (++rec[*i] > 1)
                return true;
        return false;
    }
};