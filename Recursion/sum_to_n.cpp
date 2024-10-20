#include <iostream>
using namespace std;

void sum(int n, int &sum_m)
{
  if (n == 0)
  {
    cout << sum_m;
    return;
  }
  sum_m += n;
  sum(n - 1, sum_m);
}
int sum2(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return n + sum2(n - 1);
}

int main()
{
  int n;
  cout << "enter n";
  cin >> n;
  int sum_m = 0;
  sum(n, sum_m);
  sum2(n);
  return 0;
}