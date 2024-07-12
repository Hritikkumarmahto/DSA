#include <bits/stdc++.h>
using namespace std;
// struct Node //insted of struct we can use class also
class Node // struct don't profide the OOPs functionality like inheritance ,polymorphish
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node *y = new Node(arr[0], nullptr);
    // cout << y << endl;
    Node *y = new Node(arr[2], nullptr);
    cout << y->data;
   
