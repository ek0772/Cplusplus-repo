/**
 * @file Lab11_ek0772.cpp
 * @author Elijah K
 * @date 4-26-26
 * @brief A simple program to catch an index error from a vector of cities
 * @ai NO AI AGENTS WERE USED in the development of this code. Code structure is insipired by my python programming CSCI 1511 exception handling assignment,
 * as well as Unit 11/Week 11 content presentation slides. 
 */

#include <vector>
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int choice;
bool active = true;



vector<string> cities = {"Columbus","Akron","Cleveland","Dayton","Cincinatti","Medina","Mansfeild"};


int main () {
    cout << "Welcome!" << endl;
    while (active ==true) {
    cout << "Please enter a valid index to retreive" << endl;
    cin >> choice;

    try 
    { 
        cout << "The selected index is: " << choice << endl;
        cout << "This index corresponds to " << cities.at(choice) << endl;
        if ((choice<0) || (choice>=cities.size())) {
            throw out_of_range("Invalid Index");
    }

}
    catch(out_of_range& TooLow) {
        if (choice<0) {
            cout << "an invalid index because it is too low. The First city (at index 0) is "<< cities.front() << endl;
            cout << "Try again." <<endl;
        }
        else if (choice>=cities.size()) {
            cout << "an invalid index because it is too High. The Last city (at index 6) is "<< cities.back() << endl;
            cout << "Try again." <<endl;
    }

    }
}
}

