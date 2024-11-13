#include <iostream>
#include <ctime>
using namespace std;

int random(int min, int max);
void selectionSort(int arr[], int n);
int binarySearch(int arr[], int n, int target);

int main() {
    int numElements, minNum, maxNum, target;
    srand(time(NULL));
    cout << "Quantos numeros de elementos? " << endl;
    cin >> numElements;
    cout << "Qual o menor numero desejado?" << endl;
    cin >> minNum;
    cout << "Qual o maior numero desejado?" << endl;
    cin >> maxNum;

    int arrayNum[numElements];

    for (int i = 0; i < numElements; i++) {
        arrayNum[i] = random(minNum, maxNum);
    }
    cout << "Array: ";
    for (int i = 0; i < numElements; i++) {
        cout << arrayNum[i] << " ";
    }
    cout << endl << "Array ordenado:" << endl;
    selectionSort(arrayNum, numElements);
    for (int i = 0; i < numElements; i++) {
        cout << arrayNum[i] << " ";
    }

    cout << endl << "Qual elemento gostaria de buscar? " << endl;
    cin >> target;
    int result = binarySearch(arrayNum, numElements, target);
    if (result == -1) {
        cout << "O numero " << target << " nao esta no array." << endl;
    } else {
        cout << "O numero " << target << " esta na posicao " << result + 1 << endl;
    }

    return 0;
}

int random(int min, int max) {
    return min + rand() % (max + 1 - min);
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[min] > arr[j]) min = j;
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int finish = n - 1;
    while (start <= finish) {
        int mid = (start + finish) / 2;
        if (target == arr[mid]) return mid;
        if (target > arr[mid]) start = mid + 1;
        else finish = mid - 1;
    }
    return -1;
}