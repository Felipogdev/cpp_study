#include <iostream>

namespace primeiro {
    int x = 10;
}

namespace segundo {
    int x = 20;
}

int main () {
    //Implica que estou usando o namespace std cout, então posso tirar o std:: do cout
    using std::cout;

    int x = 0;
    cout << x << ' ';
    cout << primeiro::x << ' ';
    cout << segundo::x << ' ';

    return 0;
}