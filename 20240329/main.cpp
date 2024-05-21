#include <iostream>
#include <cmath>


int count(double a, double b, double x) {
    double e = 2.71828182846;

    return asin(pow(a, 2)) + acos(b * x - a) + pow(e, b * x);
}

int main() {
    std::cout << count(10, 38, 379);
}
