#include <iostream>
using namespace std;

/*
Напишите рекурсивную функцию вычисления наибольшего общего делителя 
двух положительных целых чисел (Greatest Common Divisor, GCD).
*/

unsigned gcd(unsigned a, unsigned b)
{
    if (b != 0) {
       return gcd(b, a % b);
    }
    return a;
}

int main() {
    int a = gcd(18, 6);
    cout << a << endl;
}