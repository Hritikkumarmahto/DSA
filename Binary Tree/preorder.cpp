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
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}
void inorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void PostOrder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    PostOrder(node->left);
    PostOrder(node->right);
    cout << node->data << " ";
}
int main()
{
    Node *root = new Node(5);

    root->left = new Node(2);

    root->right = new Node(3);

    root->left->left = new Node(4);

    cout << "Normal tree     ";
    cout << root->left->data << " " << root->data << " " << root->right->data << " " << root->left->left->data;
    cout << endl;
    cout << "preOrdertree   ";
    preorder(root);
    cout << endl;
    cout << "InOrder ";
    inorder(root);

    cout << endl;
    cout << "Postorder ";

    PostOrder(root);
}