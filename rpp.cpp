#include <iostream>
#include <time.h>


int main () {
    using std::cout;

    srand(time(NULL));
    int computerChoice = (rand() % 3) + 1;
    int playerChoice;
    
    cout << "Jogo de Pedra, Papel e Tesoura" << '\n';

    do {
        cout << "Digite 1 para escolher Pedra" << '\n';
        cout << "Digite 2 para escolher Papel" << '\n';
        cout << "Digite 3 para escolher Tesoura" << '\n';
        std::cin >> playerChoice;
    } while (playerChoice < 1 || playerChoice > 3);

    switch (playerChoice) {
        case 1: cout << '\n'<<"Voce escolheu Pedra"; break;
        case 2: cout << '\n'<<"Voce escolheu Papel"; break;
        case 3: cout << '\n'<<"Voce escolheu Tesoura"; break;
    }

    switch (computerChoice) {
        case 1: cout << '\n' <<"A maquina escolheu Pedra"; break;
        case 2: cout << '\n' <<"A maquina escolheu Papel"; break;
        case 3: cout << '\n' <<"A maquina escolheu Tesoura"; break;
    }

    if (playerChoice == computerChoice) {
        cout << '\n' << "Empate";
    } else if ((playerChoice == 1 && computerChoice == 3) || (playerChoice == 2 && computerChoice == 1) || (playerChoice == 3 && computerChoice == 2)) {
        cout << '\n' <<"Voce venceu.";
    } else {
        cout << '\n' << "Voce perdeu";
    }

    return 0;
}