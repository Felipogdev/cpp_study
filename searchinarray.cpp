#include <iostream>

int findElement();

using namespace std;

int findElement(int array[], int length, int target);

int main() {
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int numsLength= sizeof(nums)/sizeof(int);
    int target;
    int index;

    cout << "Qual o elemento que gostaria de buscar?" << endl;
    cin >> target;

    index = findElement(nums, numsLength, target);
    (index != -1) ? cout << "O elemento " << target << " esta no index: " << index : cout << "O elemento nao esta no array.";


    return 0;
}

int findElement(int array[], int length, int target) {
    for (int i = 0; i < length ; i++) {
        if (array[i] == target) {
            return i;
        }
    }
        return -1;
}
