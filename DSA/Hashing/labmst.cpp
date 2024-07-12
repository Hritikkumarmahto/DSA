#include <iostream>
using namespace std;

void reverseString(char str[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    cout << "Enter a string: ";
    string input;
    cin >> input;

    int length = input.length();

    char str[100];
    for (int i = 0; i < length; i++)
    {
        str[i] = input[i];
    }

    reverseString(str, length);

    cout << "Reversed string: " << str << endl;

    int k;
    cout << "Enter the position (k): ";
    cin >> k;

    if (k < 1 || k > length)
    {
        cout << "Invalid position." << endl;
        return 1;
    }

    cout << "K-th element in the reverse string: " << str[k - 1] << endl;

    return 0;
}
