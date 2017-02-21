class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        int size = nums.size();
        string medal[3] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        vector<string> res(size, "");
        vector<pair<int, int>> n; //pair<index, value>
        for (int i = 0; i < size; i++) {
            n.push_back (make_pair (i, nums[i]));
        }
        sort (n.begin(), n.end(), compare);
        for (int i = 3; i < size; i++) {
            res[n[i].first] = to_string (i + 1);
        }
        for (int i = 0; i < min (3, size); i++) {
            res[n[i].first] = medal[i];
        }
        return res;
    }
    static bool compare (const pair<int, int>&i, const pair<int, int>&j) {
        return i.second > j.second;
    }
};