#include <iostream>
#include <cmath>


double y(double x) {
    double y;
    if (x >= 5) {
        y = 2 * sqrt(x) + 8.2;
    } else if (1 < x < 5) {
        y = 1 / x;
    } else if (-2 <= x <= 1) {
        y = -pow(x, 2);
    } else if (x < -2) {
        y = pow(x, 3);
    }
    return y;
}


int main() {
    std::cout << "Enter x.\n";
    double x;
    std::cin >> x;
    std::cout << "y=" << y(x);
}
