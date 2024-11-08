#include <iostream>
#include <string>
using namespace std;

int main() {
    string students[] = {"Ana", "Bernardo", "Carlos"};
    int notas [] = {12, 15, 20};
 
    //Primiero bota o datatype, nome para o elemento, que é estudante, e vem do array estudantes
    for (string student : students) {
        cout << student << endl;
    }

    for (int nota : notas) {
        cout << nota << endl;
    }


    return 0;
}