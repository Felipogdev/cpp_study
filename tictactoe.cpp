#include <iostream>
#include <time.h>
using namespace std;

//funcao checkwin
//funcao checktie

void printBoard (char arr[][3]);
bool checkWin (char arr[3][3]);

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
         } while (cell < 1 || cell > 9);
         // TODO: Checar se a posição já foi utilizada.
         int cellX = (cell % 3);
         int cellY = (cell / 3);
         if (playerTurn == true) board[cellX][cellY] = 'X';
         if (playerTurn == false) board[cellX][cellY] = 'O';

         turn++;
         if (turn > 3) checkWin(board);
         //Para mudar o turno
         playerTurn = !playerTurn;

     }
return 0;
}

void printBoard (char arr[3][3]) {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }
}

bool checkWin (char arr[3][3]) {
    //Wins na Horizontal
    if (arr [0][0] == arr[0][1] && arr[0][1] == arr[0][2]) return true;
    if (arr [1][0] == arr[1][1] && arr[1][1] == arr[1][2]) return true;
    if (arr [2][0] == arr[2][1] && arr[2][1] == arr[2][2]) return true;
    //Wins na Vertical
    if (arr [0][0] == arr[1][0] && arr[1][0] == arr[2][0]) return true;
    if (arr [0][1] == arr[1][1] && arr[1][1] == arr[2][1]) return true;
    if (arr [0][2] == arr[1][2] && arr[1][2] == arr[2][2]) return true;
    //Wins na Diagonal
    if (arr [0][0] == arr[1][1] && arr[1][1] == arr[2][2]) return true;
    if (arr [0][2] == arr[1][1] && arr[1][1] == arr[2][0]) return true;
    return false;
}

