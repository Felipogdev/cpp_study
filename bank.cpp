#include <iostream>



int main () {
    int montante = 0;
    int choice = 0;

    do {
    std::cout << '\n' <<"Escolha sua opcao";
    std::cout << '\n' << "1 - Mostrar montante";
    std::cout << '\n' << "2 - Depositar um valor";
    std::cout << '\n' << "3 - Sacar um valor";
    std::cout << '\n' << "4 - Finalizar operacao";
    std::cout << '\n';
    std::cin >> choice;

    switch (choice){
    case 1:
    std::cout << '\n' <<"Valor da conta: " << montante;
    break;

    case 2:
    int adicionarValor;
    std::cout << "Qual valor gostaria de depositar?" << '\n';
    std::cin >> adicionarValor;
    montante += adicionarValor;
    std::cout << "Seu montante atual e igual a: " << montante;
    break;

    case 3: {
    int sacarValor;
        std::cout << "Qual valor gostaria de sacar?" << '\n';
        std::cin >> sacarValor;

            if (sacarValor < 0) {
                std::cout << "Valor invalido para saque." << '\n';
                } else if (sacarValor > montante) {
                    std::cout << "Operacao invalida, saldo insuficiente para realizar a operacao." << '\n';
                } else {
                    montante -= sacarValor;
                    std::cout << "Seu montante atual e igual a: " << montante << '\n';
                }
                break;
    }
    
    case 4:
    std::cout << "Finalizando seu servico.";
    exit(0);

    default:
                std::cout << "Opcao invalida. Tente novamente." << '\n';
    }
    } while (choice != 0);
    
}
