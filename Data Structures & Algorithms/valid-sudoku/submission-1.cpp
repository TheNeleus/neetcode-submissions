class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> redovi[9];
        unordered_set<char> kolone[9];
        unordered_set<char> kvadrati[9];

        for(int r = 0; r < 9; r++) {
            for(int k = 0; k < 9; k++) {
                char trenutni = board[r][k];

                if(trenutni == '.')
                    continue;
                
                int kvadratIndeks = (r / 3) * 3 + (k / 3);

                if(redovi[r].count(trenutni) || 
                    kolone[k].count(trenutni) || 
                    kvadrati[kvadratIndeks].count(trenutni)) {
                        return false;
                }

                redovi[r].insert(trenutni);
                kolone[k].insert(trenutni);
                kvadrati[kvadratIndeks].insert(trenutni);
            }
        }

        return true;
    }
};
