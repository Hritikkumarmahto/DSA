#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "entet the number ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}