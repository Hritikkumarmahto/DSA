#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    ofstream fout;

    fout.open("input.txt");

    reverse(str.begin(), str.end());
    while (fout)
    {
        fout << str;
        break;
    }
    fout.close();

    ifstream fin;
    fin.open("reverse.txt");

    

    return 0;
}
