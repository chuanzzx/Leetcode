class Solution { // 0ms
public:
    int countSegments(string s) {
        s = " " + s + " ";
        int seg = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] ^ s[i + 1] && (s[i] == ' ' || s[i + 1] == ' '))
                seg++;
        }
        return seg / 2;
    }
};