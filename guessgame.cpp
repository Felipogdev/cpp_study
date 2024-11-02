#include <iostream>
#include <time.h>

int main () {
    srand(time(NULL));
    int numChosen;
    int numTarget = (rand() % 10) + 1;
    int tentativas = 0;
    
    std::cout << "Escolha um numero entre 1 a 10: ";
    do {
        tentativas++;
        std::cin >> numChosen;
        if (numChosen < numTarget) {
            std::cout << "O target e maior";
        }

        if (numChosen > numTarget) {
            std::cout << "O target e menor";
        }
        if (numChosen == numTarget) {
            break;
        }
        std::cout << '\n'<< "Voce errou, escolha outro numero entre 1 a 10: ";
    } while (numChosen != numTarget);
    std::cout << "Voce acertou, o numero era: " << numTarget;
    std::cout << '\n' <<"Voce acertou em " << tentativas << " tentativas.";

    return 0;
}