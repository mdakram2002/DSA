// 36. Valid Sudoku

/*
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according
to the following rules:

1.Each row must contain the digits 1-9 without repetition.
2.Each column must contain the digits 1-9 without repetition.
3.Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

Note:
A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

*/

// First Approache,
class Solution {
public:
    bool validBox(vector<vector<char>>& board, int sr, int er, int sc, int ec) {
        // no duplicate elements
        unordered_set<char> st;

        for (int i = sr; i <= er; i++) {
            for (int j = sc; j <= ec; j++) {

                if (board[i][j] == '.')
                    continue;

                if (st.find(board[i][j]) != st.end())
                    return false;

                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

        // validate rows->
        for (int row = 0; row < 9; row++) {
            unordered_set<char> st;

            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.')
                    continue;

                if (st.find(board[row][col]) != st.end())
                    return false;

                st.insert(board[row][col]);
            }
        }

        // validate cols->
        for (int col = 0; col < 9; col++) {
            unordered_set<char> st;

            for (int row = 0; row < 9; row++) {
                if (board[row][col] == '.')
                    continue;

                if (st.find(board[row][col]) != st.end())
                    return false;

                st.insert(board[row][col]);
            }
        }
        // validate the 3*3 sub-boxes
        for (int sr = 0; sr < 9; sr += 3) {
            int er = sr + 2;

            for (int sc = 0; sc < 9; sc += 3) {
                int ec = sc + 2;

                if (!validBox(board, sr, er, sc, ec))
                    return false;
            }
        }
        return true;
    }
};