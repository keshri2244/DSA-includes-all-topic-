// Trees in data structure

/*

1. Tree is a hierarchial data structure which stores the information naturally is the form of hierarchy style.
2. Trees is one of the most powerful and advanced data structures .
3. It is non- linear data structures.
4. It represents the nodes connected by edges.

Root=> Root is a special node in a tree . The entire tree is referenced through it. It does not have a parent.

Parent Node => Parent node is an immediate predecessor of a node.

Child Node => All immediate successors of a node are its children.

Siblings => Nodes with the same parent are called Siblings.

Hight of Tree=> Height of a tree represents the height of its root node.

Complete Binary Tree

1=> If all levels of Tree are completely filled expect the last level has all keys as left as possible , is said to be complete Binary Tree.
2=> Complete binary tree is also called as Perfect Binary Tree.

*/

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int idx = -1;
Node *tree(vector<int> preorder)
{
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[idx]);
    root->left = tree(preorder);
    root->right = tree(preorder);

    return root;
}

void preorderPrint(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

void inorder(Node *root)

{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    vector<int> preorder = {1, 2, -1, -1, 3, -1, -1};
    Node *root = tree(preorder);

    cout << "Preorder:";
    preorderPrint(root);
    cout << endl;

    cout << "Inorder :";
    inorder(root);
    cout << endl;

    cout << " Postorder : ";
    postorder(root);
    cout << endl;
}
