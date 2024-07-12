#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
void insert_at_end(Node *&head, int numbers)
{
    Node *newNode = new Node(numbers);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void display(Node *head)
{
    cout << "Linked List " << endl;
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = nullptr;
    int totalelements;
    int numbers;

    cout << "enter the no values to insert in the linked list: ";
    cin >> totalelements;

    for (int i = 0; i < totalelements; i++)
    {
        cout << "enter the values ";
        cin >> numbers;
        insert_at_end(head, numbers);
    }
    display(head);

    // clean up memory
    Node *current = head;
    while (current != nullptr)
    {
        Node *next_node = current->next;
        delete current;
        current = next_node;
    }
    return 0;
}
