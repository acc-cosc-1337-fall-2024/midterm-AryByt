#include <iostream>
#include <vector>
#include "question2.h"

int main() {
    char choice;

    do {
        int cookies;
        std::cout << "Enter the number of cookies to bake: ";
        std::cin >> cookies;

        if (cookies <= 0) {
            std::cout << "Invalid input. Please enter a positive number.\n";
            continue;
        }

        auto ingredients = get_cookie_ingredients(cookies);
        std::cout << "Cups of Sugar: " << ingredients[0] << std::endl;
        std::cout << "Cups of Butter: " << ingredients[1] << std::endl;
        std::cout << "Cups of Flour: " << ingredients[2] << std::endl;

        std::cout << "Do you want to bake more cookies? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}