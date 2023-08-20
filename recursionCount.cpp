/*
В коде программы определена следующая функция.
Нужно посчитать, сколько всего раз будет вызвана функция foo, если ее вызвать с аргументом 3 (т.е. foo(3)). 
Самый первый вызов тоже нужно посчитать. 
*/

#include <iostream>
using namespace std;

int foo(int n) {
    cout << n << endl;
    if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}

int main() {
    foo(3);
}
