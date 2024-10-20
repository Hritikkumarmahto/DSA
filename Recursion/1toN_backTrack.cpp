#include <iostream>
using namespace std;
int i = 5;
void one_to_N(int i)
{
  if (i < 1)
  {
    return;
  }
  cout << i;
  one_to_N(i - 1); 
}
int main()
{
  one_to_N(i);
  return 0;
}