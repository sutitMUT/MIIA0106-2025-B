// TODO: Bubble Sort แบบมากไปน้อย ด้วย pointer
#include <iostream>
using namespace std;

void printArray(int* p, int size) {
    // TODO จาก ข้อ 4
    for (int i = 0; i < size; i++)
    {
        cout << *(p + i) << "\t";
    }
    cout << endl;
}

void swapValue(int* a, int* b) {
    // TODO จาก ข้อ 5
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortDescending(int* p, int size) {
    // TODO
}

int main() {
    int arr[] = { 5, 2, 9, 1, 3 };
    int size = 5;

    printArray(arr, size);
    sortDescending(arr, size);
    printArray(arr, size);
    return 0;
}
