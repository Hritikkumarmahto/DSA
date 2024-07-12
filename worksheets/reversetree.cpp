#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* invertTree(TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }

    swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);

    return root;
}

void printTree(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

TreeNode* createNode(int value) {
    return new TreeNode(value);
}

int main() {
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "Original binary tree: ";
    printTree(root);
    cout << endl;

    root = invertTree(root);

    cout << "Inverted binary tree: ";
    printTree(root);
    cout << endl;

    return 0;
}
