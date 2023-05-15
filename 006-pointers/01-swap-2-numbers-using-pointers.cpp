#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 1, b = 2;

    swap(&a, &b);

    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;

    return 0;
}