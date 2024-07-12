#include <iostream>
#include <unordered_map>
#include <cctype>
using namespace std;

int main()
{
    unordered_map<char, string> morse;
    morse['A'] = ".-";
    morse['B'] = "-..";
    morse['C'] = "-.-.";

    string decodedString;
    cout << "Enter the string to encode: ";
    getline(cin, decodedString);

    string encodedString;

    for (char &c : decodedString)
    {
        c = toupper(c);
        if (morse.find(c) != morse.end())
        {
            encodedString += morse[c] + " ";
        }
        else if (c == ' ')
        {
            encodedString += " ";
        }
        else
        {
            encodedString += "? ";
        }
    }

    cout << "Encoded Morse code string: " << encodedString << endl;

    return 0;
}
