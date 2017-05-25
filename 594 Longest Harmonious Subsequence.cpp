class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            ++m[nums[i]];
        }
        int maxLength = 0;
        if (m.size() >= 1) {
            map<int, int>::iterator it2 = m.begin();
            ++it2;
            for (map<int, int>::iterator it = m.begin(); it2 != m.end(); ++it, ++it2) {
                if (it->first == (it2->first) - 1) { // diff is 1
                    maxLength = max (maxLength, it->second + it2->second);
                }
            }
        }
        return maxLength;
    }
};