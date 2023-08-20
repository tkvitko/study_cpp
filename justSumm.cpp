/*
Программа N раз выводит сумму введенных чисел.
*/

#include <iostream>
using namespace std;

int main() {
    int count = 0;
    cin >> count;

    while (count--) {
        int a = 0;
        int b = 0;
        cin >> a >> b;
        cout << (a + b) << "\n";
    };
}