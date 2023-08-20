/*
Программа решает квадратное уравнение.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    // Ввод значений и вычисление дистриминанта
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;

    if (d < 0) {
        cout << "No real roots" << endl;
    } else {
        double x1, x2;
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << x1 << " " << x2 << endl;
    };
}