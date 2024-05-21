#include <iostream>


std::string Δ(double a, double b, double c) {
    if (a + b < c || a + c < b || b + c < a) {
        return "Трикутник побудувати неможливо";
    } else if (a == b && b == c) {
        return "Трикутник рівнобічний";
    } else if (a == b || b == c || a == c) {
        return "Трикутник рівнобедрений";
    } else {
        return "Трикутник звичайний";
    }
}

int main() {
    double a;
    std::cout << "Введіть першу сторону трикутника.\n";
    std::cin >> a;
    double b;
    std::cout << "Введіть другу сторону трикутника.\n";
    std::cin >> b;
    double c;
    std::cout << "Введіть третю сторону трикутника.\n";
    std::cin >> c;
    std::cout << Δ(a, b, c);
}
