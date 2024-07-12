#include <iostream>
using namespace std;
int main()
{
    int n, m, ans = 1;
    cout << "enter both number ";
    cin >> n;
    cin >> m;
    int minum = min(n, m);

    for (int i = 1; i <= minum; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            ans = i;
        }
    }
    cout << "the gcd is " << ans;
    return 0;
}
for(int i=0;i<n;i++)
{
    
}