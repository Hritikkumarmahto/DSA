/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "enter a ";
    cin >> a;
    cout << "enter b ";
    cin >> b;

    int c = a % b;

    int d = a / b;

    cout << "the mod is " << c << endl;
    cout << "the div " << d;

    return 0;
}