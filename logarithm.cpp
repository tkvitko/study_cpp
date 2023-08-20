#include <iostream>
using namespace std;

/*
Напишите программу для вычисления целочисленного логарифма по основанию 2,
чтобы результат не превышал заданное число.
*/


int log(int target) {
    int i = 0;
    int current = 2;
    
    while (current < target) {
        current *= 2;
        i++;
    };
    return i--;
}

int main() {
    int count = 0;
    cin >> count;

    while (count--) {
        int a = 0;
        cin >> a;
        cout << log(a) << "\n";
    };
}