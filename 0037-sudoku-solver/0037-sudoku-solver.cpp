#include <vector>

class Solution {
public:
    void solveSudoku(std::vector<std::vector<char>>& board) {
        solve(board);
    }

private:
    bool solve(std::vector<std::vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                // Find an empty cell
                if (board[row][col] == '.') {
                    // Try digits '1' through '9'
                    for (char c = '1'; c <= '9'; c++) {
                        if (isValid(board, row, col, c)) {
                            board[row][col] = c; // Tentatively place character
                            
                            // Recursively try to solve the rest of the board
                            if (solve(board)) {
                                return true; 
                            }
                            
                            board[row][col] = '.'; // Backtrack
                        }
                    }
                    return false; // No valid digit fits in this cell, trigger backtracking
                }
            }
        }
        return true; // Entire board filled successfully
    }

    bool isValid(std::vector<std::vector<char>>& board, int row, int col, char c) {
        for (int i = 0; i < 9; i++) {
            // Check row constraint
            if (board[row][i] == c) return false;
            
            // Check column constraint
            if (board[i][col] == c) return false;
            
            // Check 3x3 sub-box constraint
            // (row / 3 * 3) gives the starting row index of the 3x3 box
            // (col / 3 * 3) gives the starting column index of the 3x3 box
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;
        }
        return true;
    }
};
