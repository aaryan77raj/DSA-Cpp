class Solution {
    public:
        unordered_set<string> seen;
        vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> ret;
            vector<string> board(n, string(n, '.'));
            vector<bool> col(n, false);
            vector<bool> diag1(2 * n - 1, false);
            vector<bool> diag2(2 * n - 1, false);
            backtrack(0, n, board, col, diag1, diag2, ret);
            return ret;
        }
    void backtrack(int r, int n, vector<string>& board, vector<bool>& col,
    vector<bool>& diag1, vector<bool>& diag2, vector<vector<string>>& ret) {
        if (r == n) {
            ret.push_back(board);
            return;
        }
        for (int c = 0; c < n; ++c) {
            if (!col[c] && !diag1[r + c] && !diag2[r - c + n - 1]) {
                board[r][c] = 'Q';
                col[c] = diag1[r + c] = diag2[r -c + n - 1] = true;
                backtrack(r + 1, n, board, col, diag1, diag2, ret);
                col[c] = diag1[r + c] = diag2[r -c + n - 1] = false;
                board[r][c] = '.';
            }
        }
    }
};