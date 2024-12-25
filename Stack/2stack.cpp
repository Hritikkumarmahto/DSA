#include <iostream>
using namespace std;
class stack
{
public:
  int size;
  int *arr;
  int top1;
  int top2;

  stack(int s)
  {
    this->size = s;
    top1 = -1;
    top2 = s;
  }
  void push1(int element)
  {
    if (top2 - top1 > 1)
    {
      top1++;
      arr[top1] = element;
    }
  }
  void push2(int element)
  {
    if (top2 - top1 > 1)
    {
      top2--;
      arr[top2] = element;
    }
  }

  void pop1()
  {
    if (top1 >= 0)
    {
      top1--;
    }
  }
  void pop2()
  {
    if (top2 < size)
    {
      top2++;
    }
  }
  void printstack()
  {
    if (top1 > -1 && top2 < size)
    {
      for (int i = 0; i < size; i++)
      {
        cout << arr[i]<<" ";
      }
    }
  }
};
int main()
{
  stack st(3);
  st.push1(2);
  st.push2(3);
  st.push2(1);

  st.printstack();
  return 0;
}