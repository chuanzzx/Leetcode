class Solution {
public:
    string getHint(string secret, string guess) {
        int map1[10] = {0}, map2[10] = {0};
        int bull = 0, cows = 0;
        for (int i = 0; i < secret.size(); i++) {
            map1[secret[i] - '0']++;
            map2[guess[i] - '0']++;
            if (secret[i] == guess[i])
                bull++;
        }
        for (int i = 0; i < 10; i++) {
            cows += (map1[i] > map2[i]) ? map2[i] : map1[i];
        }
        return string (to_string (bull) + 'A' + to_string (cows - bull) + 'B');
    }
};