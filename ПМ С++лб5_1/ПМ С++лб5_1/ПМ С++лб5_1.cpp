

#include <iostream>
#include <cmath>
using namespace std;
double f1(double x) {
    return (pow(x, 4) + (2 * x) * 2 + 3);
}
double f2(double x) {
    return (sqrt((2 * x) + log(x)));
}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double A = 5, B = 8, C = 0.3;
    double sumf1 = 0.0, sumf2 = 0.0;

    for (double x = A;x <= B;x += C) {
        sumf1 += f1(x);
    }
    for (double x = A;x <= B;x += C) {
        sumf2 += f2(x);
    }

    cout << "Сума ряду для f1(x) вiд " << A << " до " << B << " з кроком " << C << " = " << sumf1 << endl;
    cout << "Сума ряду для f2(x) вiд " << A << " до " << B << " з кроком " << C << " = " << sumf2 << endl;
}
