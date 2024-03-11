#include <iostream>
#include "question4.h"

int main() {
    char choice;

    do {
        int widgets_sold;
        std::cout << "Enter the number of widgets sold: ";
        std::cin >> widgets_sold;

        if (widgets_sold < 1) {
            std::cout << "Invalid input. Please enter a positive number.\n";
            continue;
        }

        int points_earned = get_earned_points(widgets_sold);
        std::cout << "Points Earned: " << points_earned << std::endl;

        std::cout << "Do you want to continue? (Y/N): ";
        std::cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}