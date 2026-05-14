#include "Instructions.h"

// this function is declared static
// If you would like to print your own instructions to the came,
// overwrite the cout statements inside this function.
void Instructions::print()
{
	cout << "Hello, and welcome to Cats and Cougars. You will have 10 attempts to guess the correct word." << endl;
	cout << "Each word must have 4 unique letters. This is called an isogram. If you guess the correct letter in the correct position, you earn a cat." << endl;
	cout << "If you guess a correct letter in the wrong position, you get a cougar. If you guess the word correctly, you win!" << endl;
	cout << "Don't worry about words being case-sensitive." << endl;
	cout << "You have 10 tries.\n" << endl;
	cout << "Good luck, and have fun playing!" << endl;
}