#include <iostream>
using namespace std;
int n = 0;
void nameis()
{
  if (n == 5)
  {
    return;
  }
  cout << "Hritik " << " ";
  n++;
  nameis();
}
int main()
{
  nameis();
  return 0;
}