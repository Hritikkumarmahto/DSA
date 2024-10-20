#include <iostream>
using namespace std;
bool strinCheck(int i, string str)
{
  if (i >= str.size() / 2)
  {
    return true;
  }
  if (str[i] != str[str.size() - i - 1])
  {
    return false;
  }
  return strinCheck(i + 1, str);
}
int main()
{
  string str = "madam";
  bool result = strinCheck(0, str);
  if (result)
  {
    cout << str << " is a palindrome." << endl;
  }
  else
  {
    cout << str << " is not a palindrome." << endl;
  }
  return 0;
}