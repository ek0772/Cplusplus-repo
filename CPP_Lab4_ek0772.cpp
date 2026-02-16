/**
 * @file Lab4_ek0772.cpp
 * @author Elijah K
 * @date 2026-02-15
 * @brief a program to generate a multiplication table with input validation
 */

using namespace std;
#include <iostream>
#include <string>
int usernum1;
int shiftingnum = 1;
int main() {
    cout << "Enter the maximum digit for the multiplication table: " << endl;
    cout << "The digit must be greater than 4 and less than 10 " << endl;
    cin >> usernum1;
    while (usernum1 <= 4 || usernum1 >= 10) {
        cout << "Invalid input. Please enter a number greater than 4 and less than 10." << endl;
        cin >> usernum1;
    }

    while (shiftingnum -1 < usernum1) {
        cout << shiftingnum * 1 << "\t" << shiftingnum * 2 << "\t" << shiftingnum * 3 << "\t" << shiftingnum * 4 << "\t" << shiftingnum * 5 << "\t" << shiftingnum * 6 << "\t" << shiftingnum * 7 << "\t" << shiftingnum * 8 << "\t" << shiftingnum * 9;
        cout << endl;
        shiftingnum++;
}
}