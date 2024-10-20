#include <iostream>
using namespace std;
int i = 1;
int n = 10;

void to_N()
{
  if (i == n)
  {
    return;
  }
  cout << i << " ";
  i++;
  to_N();
}
int main()
{
  to_N();
  return 0;
}