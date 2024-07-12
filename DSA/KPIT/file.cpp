#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string reversed;
    for (int i = input.length() - 1; i >= 0; --i)
    {
        reversed += input[i];
    }

    ofstream outputFile("output.txt");
    if (outputFile.is_open())
    {
        outputFile << reversed;
        outputFile.close();
        cout << "Reversed string has been written to output.txt" << endl;
    }
    else
    {
        cerr << "Unable to open output.txt for writing" << endl;
        return 1;
    }

    ifstream inputFile("output.txt");
    if (inputFile.is_open())
    {
        string outputFromFile;
        getline(inputFile, outputFromFile);
        inputFile.close();
        cout << "Reversed string read from file: " << outputFromFile << endl;
    }
    else
    {
        cerr << "Unable to open output.txt for reading" << endl;
        return 1;
    }

    return 0;
}
