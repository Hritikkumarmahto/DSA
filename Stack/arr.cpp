#include <iostream>
#include <stack>
using namespace std;
class stackImpliment
{
public:
  int *arr;
  int top;
  int size;

  stackImpliment(int size)
  {
    this->size = size;
    top = -1;
    arr = new int[size];
  }

  void push(int elements)
  {
    if (size - top > 1)
    {
      top++;
      arr[top] = elements;
    }
    else
    {
      cout << "stack is full";
    }
  }
  void pop()
  {
    if (top >= 0)
    {
      cout << "you deleted the element " << arr[top] << endl;
      top--;
    }
    else
    {
      cout << "stack is empty" << endl;
    }
  }
  int peek()
  {
    if (top > 0)
    {
      cout << "the top element is ";
      return arr[top];
    }
    else
    {
      cout << "stack is fulll" << endl;
      return 0;
    }
    cout << endl;
  }
  bool isEmpaty()
  {
    if (top == -1)
    {
      return false;
    }
    else
    {
      return true;
    }
  }

  void printStack()
  {
    if (top == -1)
    {
      cout << "stack is empty" << endl;
    }
    else
    {
      for (int i = 0; i < top; i++)
      {
        cout << arr[i] << " ";
      }
    }
    cout << endl;
  }
};

int main()
{
  stackImpliment st(5);

  st.push(5);
  st.push(6);
  st.push(7);
  st.push(8);
  st.push(9);

  cout << "the elements are ";
  st.printStack();
  cout << st.peek();

  st.pop();

  return 0;
}