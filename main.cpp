// JV 08-20-25
// Help with Gemini

#include <iostream>

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    // Nested if-else structure to find the largest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            std::cout << "The largest number is: " << num1 << std::endl;
        } else {
            std::cout << "The largest number is: " << num3 << std::endl;
        }
    } else {
        if (num2 >= num3) {
            std::cout << "The largest number is: " << num2 << std::endl;
        } else {
            std::cout << "The largest number is: " << num3 << std::endl;
        }
    }

    return 0;
}