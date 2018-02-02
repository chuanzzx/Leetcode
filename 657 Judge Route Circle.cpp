class Solution {
public:
    bool judgeCircle(string moves) {
        int R = 0, L = 0, U = 0, D = 0;
        for (int i = 0; i < moves.size(); ++i)
        {
            if (moves[i] == 'R')
            {
                ++R;
            }
            if (moves[i] == 'L')
            {
                ++L;
            }
            if (moves[i] == 'U')
            {
                ++U;
            }
            if (moves[i] == 'D')
            {
                ++D;
            }
        }
        return (R == L && U == D);
    }
};