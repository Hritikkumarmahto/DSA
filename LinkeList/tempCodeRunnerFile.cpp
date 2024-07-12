#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    cout << data;
    cout << next;
};
int main()
{
    node datas;
    datas.data = 4;
    datas.next = NULL;
    return 0;
}
