/**
 *@file Lab5_username.cpp
 *@author Elijah K
 *@date 2025-02-21
 *@brief A modular program to generate a multiplication table using functions. 
 */

#include <iostream>
#include <string>
using namespace std;
int input, maxDigit, shiftingnum;

/**
 * @brief: Error output for invalid input.
 * @param: None.
 * @return: None (void).
 */
void printInputValidationError() {
cout << "Invalid input. The digit must be greater than 4 and less than 10 " << endl;
}
/**
 * @brief: Validates that user input is within the acceptable range
 * @param: input - The user-provided integer to validate.
 * @return: true if the input falls within the strict exclusive range (4,10)
 */
bool isMaxDigitInputValid(int input) {
return (input > 4 && input < 10);
}
    /**
 * @brief: Prompts user for input and ensures it is valid.
 * @param: None.
 * @return: A validated int representing the maximum digit.
 */
int getMaxDigitInput() {
cout << "Enter the maximum digit for the multiplication table: " << endl;
cin >> input;
while (!isMaxDigitInputValid(input)) {
    printInputValidationError();
    cin >> input;
}
return input;
}
/**
 * @brief: Prints the formatted multiplication table.
 * @param: maxDigit - The highest digit to include in the table.
 * @return: None (void).
 */
void printMultiplicationTable(int maxDigit) {
int shiftingnum = 1;
while (shiftingnum < maxDigit+1) {
    cout << shiftingnum * 1 << "\t"
    << shiftingnum * 2 << "\t" 
    << shiftingnum * 3 << "\t" 
    << shiftingnum * 4 << "\t" 
    << shiftingnum * 5 << "\t" 
    << shiftingnum * 6 << "\t" 
    << shiftingnum * 7 << "\t" 
    << shiftingnum * 8 << "\t" 
    << shiftingnum * 9;
    cout << endl;
    shiftingnum++;
}
} 
/**
 * @brief: Entry point of the program.
 * @param: None.
 * @return: 0 to indicate success
 */
int main() {
int input;
int maxDigit = getMaxDigitInput();
isMaxDigitInputValid(input);
printMultiplicationTable(maxDigit);
return 0;
}