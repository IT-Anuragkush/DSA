// binary tree traversal -  DFS(depth first search).
// DFS - preorder, inorder and postorder 

#include <iostream>
using namespace std;

class Node
{
  public:
    int data;
    Node *left;
    Node *right;

  Node()
  {
    left = NULL;
    right = NULL;
  }
};

class BinaryTree
{
  public:
    Node* createTree();
    void preOrder(Node *root);
    void inOrder(Node *root);
    void postOrder(Node *root);
};

Node* BinaryTree::createTree()
{
  int d;
  cout << "Enter value (-1 for NULL) : ";
  cin >> d;

  if(d == -1)
  {
    return NULL;
  }

  Node *root = new Node;
  root->data = d;

  root->left = createTree();
  root->right = createTree();

  return root;
}

void BinaryTree::preOrder(Node *root)
{
  if(root == NULL)
      return;

  cout << root->data <<" ";
  preOrder(root->left);
  preOrder(root->right);
}

void BinaryTree::inOrder(Node *root)
{
  if(root == NULL)
      return;

  inOrder(root->left);
  cout << root->data <<" ";
  inOrder(root->right);
}

void BinaryTree::postOrder(Node *root)
{
  if(root == NULL)
      return;

  postOrder(root->left);
  postOrder(root->right);
  cout << root->data <<" ";
}

int main()
{
  BinaryTree bt;

  Node* root = bt.createTree();

  cout << "Preorder traversal : ";
  bt.preOrder(root);
  cout << endl;

  cout << "Inorder traversal : ";
  bt.inOrder(root);
  cout << endl;

  cout << "Postorder traversal : ";
  bt.postOrder(root);
  cout << endl;

}

// enter for check - 1 2 -1 -1 3 -1 -1