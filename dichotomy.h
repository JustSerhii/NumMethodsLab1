#include <iostream>
#include <cmath>

using namespace std;

double func(double x) {
    return pow(x-1, 3) + 0.5*exp(x);
}

void dichotomy() {
    cout << "Dichotomy method: \n\n";
    double eps = 1e-4;
    double a = 0, b = 1;
    double c;
    int i = 1;
    while (true){
        c = (a + b) / 2.0;
        cout << i << " iteration" << ": " << c << " " << func(c) << endl;
        if (abs(b - a) < eps) {
            break;
        }
        else if (func(c) == 0) {
            break;
        }
        else if (func(c) * func(a) < 0) {
            b = c;
        }
        else {
            a = c;
        }
        i++;
    }
}