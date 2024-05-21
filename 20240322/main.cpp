#include <iostream>

int countPrice(int amount) {
    if (amount < 40) {
        return amount * 2;
    } else {
        return amount * 1;
    }
}


int main() {
    std::cout << "Введіть кількість яблок.\n";
    int amount;
    std::cin >> amount;
    std::cout << "\nЦіна яблук: " << countPrice(amount);
}
