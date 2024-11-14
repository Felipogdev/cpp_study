#include <iostream>
using namespace std;

    //Abstraction = hidding unnecesarry data from outside a class
    // getter = function that makes a private attribute readable
    // setter = function that makes a private attribute writeable

class Stove {
    private:
        int temperature = 0;
    public:
    //getter
    int getTemperature() {
        return temperature;
    }
    //setter
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
};

int main() {
    Stove stove;
    stove.setTemperature(10);
    cout << "A temperatura do fogao e :" << stove.getTemperature();
    return 0;
}