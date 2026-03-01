#include <iostream>
#include "calculator.cpp" // Predpokladám, že matematika je tu

int main() {
    int a, b;
    std::cout << "Zadaj dve cisla pre delenie: " << std::endl;
    if (!(std::cin >> a >> b)) return 1;

    // Tu zavoláme tvoju funkciu. Ak b bude 0, program spadne (Crash)
    std::cout << "Vysledok: " << divide(a, b) << std::endl;

    return 0;
}
