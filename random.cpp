#include <iostream>
#include <ctime>

int main() {

    // Usa o internal clock pra gerar um pseudo random num
    srand(time(NULL));

    // Rolar um d6
    int num = (rand () % 6) + 1;

    std::cout << num;

    return 0;
}