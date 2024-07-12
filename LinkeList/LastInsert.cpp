#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int n, k;
    cout << "neter the size :- ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in th4 array :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (head == nullptr)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            tail = temp;
        }
    }
    Node *Print = head;
    cout << "current list ";
    while (Print != nullptr)
    {
        cout << Print->data << " ";
        Print = Print->next;
    }
    cout << endl;
    cout << "Enter the element you want to insert at the last ";
    cin >> k;

    tail->next = new Node(k);
    tail = tail->next;

    cout << "now the updated list is  ";

    Node *Print2 = head;

    while (Print2 != nullptr)

    {
        cout << Print2->data << " ";
        Print2 = Print2->next;
    }
    cout << endl;

    return 0;
}