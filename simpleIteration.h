#include <iostream>
#include <cmath>

using namespace std;

double f1(double x) {
    return pow(x - 1, 3) + 0.5 * exp(x);
}

double g1(double x) {
    return 1 - pow(0.5 * exp(x), 1.0 / 3.0);
}

void simpleIt() {
    cout << "Simple iteration method\n\n";

    double eps = 1e-4;
    double xn = 0.4;
    double xn1;
    int i = 1;
    while (true) {
        xn1 = g1(xn);
        if (abs(xn1 - xn) < eps) {
            break;
        }
        xn = xn1;
        cout << i << " iteration: " << xn1 << " " << f1(xn1) << endl;
        i++;
    }
}