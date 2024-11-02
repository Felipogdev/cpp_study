#include <iostream>
#include <cmath>

int main () {
    int a;
    int b;
    std::cout << "Qual o valor do primeiro cateto? ";
    std::cin >> a;
    std::cout << "Qual o valor do segundo cateto? ";
    std::cin >> b;
    std::cout <<"A hipotenusa e: " << sqrt(pow(a,2)+ pow(b,2)) << "cm";

    return 0;
}