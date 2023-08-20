/*
Программа преобразует введенную пользователем строку, оставляя по 1 пробелу меджду словами.
*/


#include <iostream>
#include <cmath>
using namespace std;


int main() {
    char c = '\0';
    bool can_print = true;

    while (cin.get(c)) { // на каждой итерации считываем один символ в переменную c
        if (c == ' ') {
            if (can_print == true) {
                cout << c;
            };
            can_print = false;
        } else {
            cout << c;
            can_print = true;
        }
    }
}