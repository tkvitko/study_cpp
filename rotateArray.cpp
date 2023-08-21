/*
В этой задаче вам нужно реализовать функцию, 
которая сдвигает содержимое массива влево на заданное число позиций (циклический сдвиг).
*/

#include <iostream>
using namespace std;

void rotate(int a[], unsigned size, int shift){
    shift = shift % size; 
    int temp[shift];

    for(int i = 0; i < shift; i++) {
        temp[i] = a[i]; // 1, 2
    }
    for(int i = shift; i < size; i++) {
        a[i - shift] = a[i];    // 3, 4, 5, 0, 0
    }
    for(int i = size - shift; i < size; i++) {
        a[i] = temp[i + shift - size];
    }
}

int main() {
    int m[] = {1, 2, 3, 4, 5};
    rotate(m, 5, 2);

    for (int i = 0; i < 5; ++i) {
        cout << m[i] << ' '; 
    }
    cout << endl;
    return 0;
    }
 