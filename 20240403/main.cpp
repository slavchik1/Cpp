#include <iostream>
#include <cmath>

int count(double x, double y) {
    double e = 2.71828182846;
    
    double a = 3.5 * pow(x, 2) + 1;
    double b = cos(2 * y);
    
    return log(x+(a/b));
}

int main() {
    std::cout << count(10, 38);
}
