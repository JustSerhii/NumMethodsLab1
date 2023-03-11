#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return pow(x-1, 3) + 0.5 * exp(x);
}

double df(double x) {
    return 3 * pow(x-1, 2) + 0.5 * exp(x);
}

void modNewton() {
    cout << "Modified Newton method \n\n";

    double eps = 1e-4;
    double a = 0, b = 0.5;
    double x = b;
    cout << "1 iteration: " << x << " " << f(x) << endl;
    for (int i = 0; abs(f(x)) > eps; ++i) {
        x -= f(x) / df(x);
        cout << i + 2 << " iteration: " << x << " " << f(x) << endl;
    }
}
