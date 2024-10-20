#include <iostream>
using namespace std;

int n = 10;
int i = 0;

void N_toONe()
{
  if (n == i)
  {
    return;
  }
  cout << n << " ";
  n--;
  N_toONe();
}
int main()
{
  N_toONe();
  return 0;
}