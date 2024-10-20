#include <iostream>
using namespace std;

int i = 0;

void N_toONe(int n)
{
  if (n == i)
  {
    return;
  }
  cout << n << " ";
  //n--;
  N_toONe(n-1);
}
int main()
{
  int n;
  cout << "enter n";
  cin >> n;
  N_toONe(n);
  return 0;
}