#include <iostream> 

bool isEven(int n) {
    return (n % 2) == 0;
}

int main() {
    int n;
    std::cout << "Введіть ціле число.\n";
    std::cin >> n;
    
    if(isEven(n)) {
        std::cout << "Више число парне.\n";
    } else {
        std::cout << "Ваше число непарне.\n";
    }
}
