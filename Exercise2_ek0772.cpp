/**
 * @file
 * @name Elijah K
 * @date 2026-04-20
 * @brief A simple program to translate a sentance into morse code.
 * 
 * 
 */
#include <iostream>
#include <string>
using namespace std;

string sentence = "";
char c;
char continuation='y';

class MorseCodeTranslator
{
public:
    void Translation(string sentence);
};
void MorseCodeTranslator::Translation(string sentence)
{// Loop through each character in the sentence and translate it into morse code, outputting the result.
    for (int i = 0; i < sentence.length(); i++)
        {
        char c = sentence[i];
        if (c == 'A')
            cout << ".- ";
        else if (c == 'B')
            cout << "-... ";
        else if (c == 'C')
            cout << "-.-. ";
        else if (c == 'D')
            cout << "-.. ";
        else if (c == 'E')
            cout << ". ";
        else if (c == 'F')
            cout << "..-. ";
        else if (c == 'G')
            cout << "--. ";
        else if (c == 'H')
            cout << ".... ";
        else if (c == 'I')
            cout << ".. ";
        else if (c == 'J')
            cout << ".--- ";
        else if (c == 'K')
            cout << "-.- ";
        else if (c == 'L')
            cout << ".-.. ";
        else if (c == 'M')
            cout << "-- ";
        else if (c == 'N')
            cout << "-. ";
        else if (c == 'O')
            cout << "--- ";
        else if (c == 'P')
            cout << ".--. ";
        else if (c == 'Q')
            cout << "--.- ";
        else if (c == 'R')
            cout << ".-. ";
        else if (c == 'S')
            cout << "... ";
        else if (c == 'T')
            cout << "- ";
        else if (c == 'U')
            cout << "..- ";
        else if (c == 'V')
            cout << "...- ";
        else if (c == 'W')
            cout << ".-- ";
        else if (c == 'X')
            cout << "-..- ";
        else if (c == 'Y')
            cout << "-.-- ";
        else if (c == 'Z')
            cout << "--.. ";

    }}


class Inputformatter
{
public:
    void Inputformatted(string sentence);
};
void Inputformatter::Inputformatted(string sentence)
{
//Format sentence to be all uppercase and remove whitespace and non-alphabetic characters.
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            sentence[i] = toupper(sentence[i]);
        }
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            //Do nothing.
        }
        else if (sentence[i] == ' ')
        {
            sentence.erase(i, 1);
            i--;
        }
        else
        {
            sentence.erase(i, 1);
            i--;
        }
    }
    cout << "Sentence formatted for translation: " << sentence << endl;
    return;
}


int main()
{
    while (continuation == 'y')
    {
    // Welcome message and prompt for user input, collecting sentence to be translated into morse code.
    cout << "Welcome to the translation program!" << endl;
    cout << "Please enter a sentence (less than 50 characters) to translate into morse code: " << endl;
    getline(cin, sentence);
    while (sentence.length() > 50)
    {
        cout << "Sentence is too long. Please enter a sentence less than 50 characters: " << endl;
        getline(cin, sentence);
    }
    cout << "Your sentence in english is: " << sentence << endl;

    Inputformatter formatter;
    formatter.Inputformatted(sentence);
    

    MorseCodeTranslator translator;
    translator.Translation(sentence);

    cout << endl << "Translation complete!" << endl;
    cout << "Translate another sentence? Input y for yes, other input will terminate the program: ";
    cin >> continuation;
    cin.ignore();
}
}

