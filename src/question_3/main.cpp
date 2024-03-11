#include <iostream>
#include "question3.h"

int main() {
    char choice;

    do {
        std::cout << "Press Y to roll the die: ";
        std::cin >> choice;

        if (choice == 'Y' || choice == 'y') {
            int result = roll_die();
            std::cout << "Result of the die roll: " << result << std::endl;
        }

    } while (choice == 'Y' || choice == 'y');

    return 0;
}