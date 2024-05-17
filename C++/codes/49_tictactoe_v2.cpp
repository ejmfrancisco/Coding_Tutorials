#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void displayBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

bool checkWin(char mark) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == mark && board[i][1] == mark && board[i][2] == mark)
            return true;
        if (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark)
            return true;
    }
    // Check diagonals
    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
        return true;
    if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
        return true;
    
    return false;
}

bool isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

void playerMove(char mark) {
    int row, col;
    cout << "Enter row and column (1-3): ";
    cin >> row >> col;
    row--; col--; // Adjusting for zero-based indexing
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = mark;
    } else {
        cout << "Invalid move. Try again." << endl;
        playerMove(mark);
    }
}

void computerMove(char mark) {
    srand(time(NULL));
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (board[row][col] != ' ');
    board[row][col] = mark;
}

int main() {
    char currentPlayer = 'X';
    int choice;
    
    do {
        displayBoard();
        switch(currentPlayer) {
            case 'X':
                playerMove(currentPlayer);
                break;
            case 'O':
                computerMove(currentPlayer);
                break;
        }
        
        if (checkWin(currentPlayer)) {
            displayBoard();
            cout << currentPlayer << " wins!" << endl;
            break;
        } else if (isBoardFull()) {
            displayBoard();
            cout << "It's a draw!" << endl;
            break;
        }
        
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    } while (true);
    
    return 0;
}
