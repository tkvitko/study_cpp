/*
Проверка, как работает i++ и ++i
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
            std::cout << i;
        }
    for (int i = 1; i <= 10; ++i) {
            std::cout << i;
        }
}