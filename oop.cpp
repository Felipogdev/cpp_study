#include <iostream>
#include <string>

using namespace std;

class Human {public:
    //Atributos
    //Posso dar um valor para essas variaveis, para serem o default;
    string name;
    int age;
    float height;
    //Metodos são funções que pertencem a uma classe, uma ação que um objeto faz
    void eat() {
        cout << "This person is eating" <<endl;
    }
    void drin() {
        cout << "This person is drinking" << endl;
    }
};

class Dog {
public:
    string bread;
    string color;
    int age;
    //Constructor para dar valores para atributos automaticamente
    Dog(string bread, string color, int age) {
        this ->bread = bread;
        this ->color = color;
        this ->age = age;
    };
};
int main() {
    //Classe Human e objeto human1
    Human human1;

    human1.name = "Felipog";
    human1.age = 20;
    human1.height = 1.70;

    cout << human1.name <<endl;
    cout << human1.age <<endl;
    cout << human1.height <<endl;

    human1.eat(); //Calling the method eat
    cout<< endl;
    Dog dog1("Shihtzu", "Branco", 4);

    cout << dog1.bread <<endl;
    cout << dog1.color <<endl;
    cout<< dog1.age <<endl;
    return 0;
}