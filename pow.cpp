/*
Функция возвредения числа в степень
*/

#include <iostream>
using namespace std;

int power(int x, unsigned p) {
    int answer = 1;
    if (p > 0) {
        for (int i = 1; i <= p; ++i) {
            answer *= x;
        }
    }
    return answer;
}

int main() {
    int a = power(2, 5);
    std::cout << a;
}