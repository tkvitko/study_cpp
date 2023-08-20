/*
Тренировка макросов.
*/

#include <iostream>
using namespace std;

#define MAX(x, y, r) {int x_ = (x); int y_ = (y); int r_ = 0; x_ > y_ ? r_ = x_ : r_ = y_ ; r = r_ ;}

int main() {
    int a = 10;
    int b = 20;
    int c = 0;
    MAX(a, b, c); // теперь c равно 20
    // MAX(a += b, b, c); // теперь a = с = 30
    std::cout << c;
}
