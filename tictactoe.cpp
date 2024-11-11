#include <iostream>

using namespace std;

void printBoard (char arr[][3]);
bool checkWin (char arr[3][3]);
bool checkTie (char arr[3][3]);

int main() {
    char board[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '.';
        }
    }
    bool playerTurn = true;
    int turn = 0;

    cout << "Jogo da velha do Felipog." <<endl;
    //Loop do jogo
     while (true) {
         int cell = 0;
         printBoard(board);
         do {
         cout << "Jogador",(playerTurn) ? cout << " X " : cout << " O ";
         cout << "Digite a celula que gostaria de marcar: ";
         cin >> cell;
         } while (cell < 1 || cell > 9 || board[(cell-1)/3][(cell-1)%3] != '.' || typeid(cell) == typeid(float));
         int cellX = (cell -1) / 3;
         int cellY = (cell -1) % 3;
         if (playerTurn == true) board[cellX][cellY] = 'X';
         if (playerTurn == false) board[cellX][cellY] = 'O';

         if (checkWin(board)) {
             printBoard(board);
             cout<< "Jogador ";
             (playerTurn) ? cout << " X " : cout<< " O ";
             cout<< "venceu!";
             break;
         }

         if (checkTie(board)) {
             printBoard(board);
             cout << "Deu Velha!";
             break;
         }

         //Para mudar o turno
         playerTurn = !playerTurn;

     }
return 0;
}

void printBoard (char arr[3][3]) {
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i+1 << " ";
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }
}

bool checkWin (char arr[3][3]) {
    //Wins na Horizontal
    for (int i = 0; i < 3; i++) {
    if (arr [i][0] != '.' && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) return true;

    }
    //Wins na Vertical
    for (int i = 0; i < 3; i++) {
        if (arr[0][i] != '.' && arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) return true;
    }
    //Wins na Diagonal
    if (arr[0][0] != '.' && arr [0][0] == arr[1][1] && arr[1][1] == arr[2][2]) return true;
    if (arr[0][2] != '.' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) return true;
    return false;
}

bool checkTie (char arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == '.') return false;
        }
    }
    return true;
}
