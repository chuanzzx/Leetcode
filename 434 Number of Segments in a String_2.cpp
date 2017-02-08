class Solution { // 3ms
public:
    int countSegments(string s) {
        int seg = 0;
        stringstream ss (s);
        string sub_str;
        while (getline (ss, sub_str, ' ')) {
            if (!sub_str.empty())
                seg++;
        }
        return seg;
    }
};