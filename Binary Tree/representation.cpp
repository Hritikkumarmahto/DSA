#include <iostream>
using namespace std;
struct Node
{
public:
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    cout << root->left->data << " " << root->data << " " << root->right->data;
    return 0;
}
