#include <iostream>
#include <stack>
using namespace std;
void reverse(string str)
{
  int size = str.length();
  stack<char> st;

  for (int i = 0; i < size; i++)
  {
    char ch = str[i];
    st.push(ch);
  }
  string ans = "";
  while (!st.empty())  
  {
    char ch = st.top();
    ans.push_back(ch);
    st.pop();
  }
  for (int i = 0; i < size; i++)
  {
    cout << ans[i];
  }
}
int main()
{
  string s = "hritik";

  reverse(s);
  return 0;
}