#include <iostream>

int main () {
    int num1;
    int num2;
    char operacao;
    int resultado;


    std::cout << "Que operacao voce gostaria de fazer? (+, - ,* , /) ";
    std::cin >> operacao;

    std::cout << "Primeiro valor: ";
    std::cin >> num1;
    std::cout << "Segundo Valor";
    std::cin >> num2;

    switch (operacao) {
        case '+':
        resultado = num1 + num2;
        std::cout << "O resultado e igual a " << resultado;
        break;

        case '-':
        resultado = num1 - num2;
        std::cout << "O resultado e igual a " << resultado;
        break;

        case '*':
        resultado = num1 * num2;
        std::cout << "O resultado e igual a " << resultado;
        break;

        case '/':
        resultado = num1 /(float)num2;
        std::cout << "O resultado e igual a " << resultado;
        break;

        default:
        std::cout << "Digite uma operacao valida";
    }
    return 0;
}