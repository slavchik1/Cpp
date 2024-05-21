#include <iostream>

int Plus(int a, int b) {
    return a + b;
}

int Minus(int a, int b) {
    return a - b;
}

int Multiply(int a, int b) {
    return a * b;
}

int Divide(int a, int b) {
    return a / b;
}

int main() {
    int a;
    std::cout << "Введіть перше число.\n";
    std::cin >> a;
    int b;
    std::cout << "Введіть друге число.\n";
    std::cin >> b;
    std::string s;
    std::cout << "Введіть знак операції (+ або - або * або /).\n";
    std::cin >> s;
    if (s == "+") {
        std::cout << Plus(a, b);
    } else if (s == "-") {
        std::cout << Minus(a, b);
    } else if (s == "*") {
        std::cout << Multiply(a, b);
    } else if (s == "/") {
        std::cout << Divide(a, b);
    } else {
        std::cout << "Помилка";
    }
}
