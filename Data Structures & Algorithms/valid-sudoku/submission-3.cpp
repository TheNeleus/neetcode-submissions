class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int redovi[9] = {0};   // koristimo prvih 9 bitova int-a za pamcenje 
        int kolone[9] = {0};   // pojavljivanja brojeva, redosled nebitan
        int kvadrati[9] = {0};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') 
                    continue;

                int val = board[r][c] - '1'; // ostaje int 0-8

                if ((redovi[r] & (1 << val)) || 
                    (kolone[c] & (1 << val)) ||
                    (kvadrati[(r / 3) * 3 + (c / 3)] & (1 << val))) {
                        return false;
                }

                redovi[r] |= (1 << val);
                kolone[c] |= (1 << val);
                kvadrati[(r / 3) * 3 + (c / 3)] |= (1 << val);
            }
        }

        return true;
    }
};