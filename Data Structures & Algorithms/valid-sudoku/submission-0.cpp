class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> redovi;
        unordered_map<int, unordered_set<char>> kolone;
        map<pair<int, int>, unordered_set<char>> kvadrati;

        for(int r = 0; r < 9; r++) {
            for(int k = 0; k < 9; k++) {
                if(board[r][k] == '.')
                    continue;
                
                pair<int, int> kvadratKljuc = {r / 3, k / 3};

                if(redovi[r].count(board[r][k]) || kolone[k].count(board[r][k]) || 
                    kvadrati[kvadratKljuc].count(board[r][k])) {
                        return false;
                }

                redovi[r].insert(board[r][k]);
                kolone[k].insert(board[r][k]);
                kvadrati[kvadratKljuc].insert(board[r][k]);
            }
        }

        return true;
    }
};
