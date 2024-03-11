#include <iostream>
#include "question1.h"

using namespace std;
int main() {
    char choice;
    do {
        double celsius;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        
        double fahrenheit = get_fahrenheit(celsius);
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
        
        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}