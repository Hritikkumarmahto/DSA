#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout << "enter the year ";
    cin >> year;
    if (year % 4 == 0 || year % 400 == 0 ? cout << "leap year" : cout << "this is not a leap year");

    return 0;
}
