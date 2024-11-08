#include <iostream>
using namespace std;


int main () {
    string questions [] =  {"1. Qual o nome da Akuma do Mi do Luffy?: ",
                            "2. Qual desses personagens nao e um Mugiwara?: ",
                            "3. Quem sola?: "};

    string options [][4] = {{"A. Bomu Bomu no Mi","B. Gomu Gomu no Mi", "C. Bara Bara no Mi" ,"D. Ito Ito no MI"}, 
                            {"A. Nico Robin", "B. Franky", "C. Chopper", "D. Vivy"} ,
                            {"A. Zoro", "B. Sogeking", "C. Kaidou", "D. Luffy",}};
    char answerkey [] = {'B' , 'D', 'A'}; 
    char answergiven [3];
    int correct = 0;


    for (int i = 0; i < sizeof(questions)/(sizeof(questions[0])); i++) {
    cout << questions[i] << endl;
    for (int j = 0; j < 4; j++) {
        cout << options[i][j] << endl;
        
    }
    do  {
            cout << "Coloque usa resposta (A, B, C, D):  ";
            cin >> answergiven[i];
            answergiven[i] = toupper(answergiven[i]);
            if (answergiven[i] == answerkey[i]) cout << "Acertou!" << endl;
            else {cout << "Errou." << endl;}
        } while (answergiven[i] != 'A' && answergiven[i] != 'B' && answergiven[i] != 'C' && answergiven[i] != 'D');
    }
    for (int i = 0; i < sizeof(questions)/sizeof(questions[0]) ; i++) {
        if (answerkey[i] == answergiven[i])
        correct++;
    }
    cout << "Voce acertou " << correct << " questoes do quiz." <<endl;
return 0; 
}