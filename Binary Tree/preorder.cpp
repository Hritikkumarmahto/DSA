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

void preorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
}
int main()
{
    Node *root = new Node(5);

    root->left = new Node(2);

    root->right = new Node(3);

    cout << "Normal tree     ";
    cout << root->left->data << " " << root->data << " " << root->right->data << endl;

    cout << "preOrdertee   ";
    preorder(root);
}