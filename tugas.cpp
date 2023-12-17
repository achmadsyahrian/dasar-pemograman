#include <iostream>

int main() {
    for (int i = 0; i < 5; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " adalah bilangan genap." << std::endl;
        } else {
            std::cout << i << " adalah bilangan ganjil." << std::endl;
        }
    }

    return 0;
}
