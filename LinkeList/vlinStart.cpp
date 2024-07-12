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

    int n;
    cin >> n;
    int arr[n];
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

    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    // to delete the allocated memory
    current = head;
    while (current != nullptr)
    {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}