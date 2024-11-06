#include <iostream>
#include <string> 
using namespace std;

bool isPalindrome(const string &num);

int main() {
    string num;

    cout << "Digite o numero: ";
    cin >> num;

    cout << "O numero digitado foi: " << num << endl;


    (isPalindrome(num)) ? cout << "E um palindromo" << endl : cout << "Nao e um palindromo" << endl;

    return 0;
}

bool isPalindrome(const string &num) {
    int size = num.size();
    for (int i = 0; i < size / 2; i++) {
        if (num[i] != num[size - i - 1]) {
            return false;
        }
    }
    return true;
}
