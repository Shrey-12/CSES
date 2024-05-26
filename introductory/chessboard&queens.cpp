#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col) {
  for (int i = 0; i < row; ++i) {
    if (board[i][col] == 'Q') return false;
  }

  // Check upper left diagonal
  for (int i = row-1, j = col-1; i >= 0 && j >= 0; --i, --j) {
    if (board[i][j] == 'Q') return false;
  }

  // Check upper right diagonal
  for (int i = row-1, j = col+1; i >= 0 && j < board.size(); --i, ++j) {
    if (board[i][j] == 'Q') return false;
  }

  return true;
}

int count = 0;
int queencount = 0;

void countArrangements(vector<vector<char>>& board, int row) {
    if (row == board.size()){
        if(queencount==board.size()){
            count++;
        }
        return;
    };

    for (int col = 0; col < board.size(); ++col) {
        if (board[row][col] == '.' && isSafe(board, row, col)) {
            board[row][col] = 'Q';
            queencount++;
            countArrangements(board, row + 1);
            queencount--;
            board[row][col] = '.'; 
        }
    }
    return;
}

int main() {
    vector<vector<char>> board(8, vector<char>(8));
    
    // Input the chessboard
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> board[i][j];
        }
    }

    // Count the number of arrangements
    countArrangements(board, 0);
    cout << count << endl;

    return 0;
}
