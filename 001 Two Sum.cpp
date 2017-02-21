class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2, 0);
        int n = nums.size();
        vector<pair<int, int>> n2;
        for (int i = 0; i < n; i++) {
            n2.push_back (make_pair (i, nums[i]));
        }
        sort (n2.begin(), n2.end(), cmp);
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                if (n2[i].second + n2[j].second > target) {
                    continue;
                } else if (n2[i].second + n2[j].second == target) {
                    res[0] = n2[i].first;
                    res[1] = n2[j].first;
                    if (res[1] < res[0])
                        swap (res[0], res[1]);
                    return res;
                } else {
                    break;
                }
            }
        }
        return res;
    }
    
    static bool cmp (const pair<int, int> &p1, const pair<int, int> &p2) {
        return p2.second > p1.second;
    }
};