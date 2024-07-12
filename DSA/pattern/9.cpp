#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums = n;
    int rev = 0;
    int ans;

    while (n > 0)
    {
        int ans = n % 10;
        rev = rev * 10 + ans;
        n /= 10;
    }
    if (rev == nums)
    {
        cout << "number  is palindrom";
    }
    else
    {
        cout << "not a palindrom bumber";
    }
}