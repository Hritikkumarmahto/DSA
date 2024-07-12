#include <iostream>
using namespace std;

void pattern(int n)
{
    // Function to print a rectangle pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Function to print a left aligned triangle pattern
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Function to print numbers starting from 1
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    // Function to print the same number multiple times
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    // Function to print a left aligned triangle pattern with decreasing stars
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Function to print a numerical pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << n - j + i;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    pattern(n);

    return 0;
}
