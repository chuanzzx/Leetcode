class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> res;
        int minIdx = list1.size() + list2.size();
        unordered_map<string, pair<int, int>> m; // pair<is_in_list1, index_in_list1>
        for (int i = 0; i < list1.size(); ++i) {
            m[list1[i]] = make_pair (1, i); 
        }
        
        for (int i = 0; i < list2.size(); ++i) {
            pair<int, int> tmp = m[list2[i]];
            if (tmp.first) {
                int nowIdx = i + tmp.second;
                if (nowIdx < minIdx) {
                    res.clear();
                    res.push_back (list2[i]);
                    minIdx = nowIdx;
                } else if (nowIdx == minIdx) {
                    res.push_back (list2[i]);
                }
            }
        }
        return res;
    }
};