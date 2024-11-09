#include <iostream>
#include <string.h>
using namespace std;

bool cardValidator(const string &num, int strlength);

int main() {
    string cardNumber;
    cout << "Qual o numero do cartao que gostaria de checar?" <<endl;
    cin >> cardNumber;
    cout << cardNumber;
    int cardNumberLength = strlen(cardNumber.c_str());
    if (cardNumberLength != 16) {
        cout << "Cartao invalido.";
        return 0;
    }
    (cardValidator(cardNumber,cardNumberLength)) ? cout << "O cartao e valido" : cout << "O cartao nao e valido";
    return 0;
}

bool cardValidator(const string &num, int strlength) {
    int sumEven = 0;
    int sumOdd = 0;
for (int i = strlength-2; i >= 0; i-=2) {
    int numberEven = (num[i] - '0') * 2;
    if (numberEven >= 10) {
        sumEven += (numberEven % 10) + (numberEven % numberEven + 1);
    } else sumEven+= numberEven;
}
    for (int i = 15; i >= 0; i-=2) {
        int numberOdd = (num[i] - '0');
        if (numberOdd >= 10) {
            sumOdd += (numberOdd % 10) + (numberOdd % numberOdd + 1);
        } else sumOdd+= numberOdd;
    }
        int sumTotal = sumEven + sumOdd;
    if (sumTotal % 10 == 0) {
        return true;
    }
    return false;
}


