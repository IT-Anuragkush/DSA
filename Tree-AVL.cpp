#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *left;
  Node *right;
  int height;

  Node()
  {
    left = NULL;
    right = NULL;
    height = 1;
  }
};
class BinaryTree
{
public:
  Node *insertAtAVL(Node *root, int d);
  int getHeight(Node *root);
  int getBalance(Node *root);

  Node *leftRotate(Node *x);
  Node *rightRotate(Node *y);
  void preOrder(Node *root);
};

void BinaryTree::preOrder(Node *root)
{
  if (root == NULL)
    return;

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

Node *BinaryTree::leftRotate(Node *x)
{
  Node *y = x->right;
  Node *t2 = y->left;

  y->left = x;
  x->right = t2;

  x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

  y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

  return y;
}

Node *BinaryTree::rightRotate(Node *y)
{
  Node *x = y->left;
  Node *t2 = x->right;

  x->right = y;
  y->left = t2;

  y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
  x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
}

int BinaryTree ::getBalance(Node *root)
{
  if (root == NULL)
    return 0;

  return getHeight(root->left) - getHeight(root->right);
}

int BinaryTree::getHeight(Node *root)
{
  if (root == NULL)
    return 0;

  return root->height;
}
Node *BinaryTree::insertAtAVL(Node *root, int d)
{
  if (root == NULL)
  {
    Node *root = new Node;
    root->data = d;
    return root;
  }
  else if (root->data < d)
  {
    root->right = insertAtAVL(root->right, d);
  }
  else
  {
    root->left = insertAtAVL(root->left, d);
  }

  root->height = 1 + max(getHeight(root->left), getHeight(root->right));

  int balance = getBalance(root);

  if (balance > 1 && d < root->left->data)
  {
    // right rotation
    return rightRotate(root);
  }
  if (balance < -1 && d > root->right->data)
  {
    // left roatation
    return leftRotate(root);
  }
  if (balance > 1 && d > root->left->data)
  {
    // left right rotation
    root->left = leftRotate(root->left);
    return rightRotate(root);
  }
  if (balance < -1 && d < root->right->data)
  {
    // right left roatation
    root->right = rightRotate(root->right);
    return leftRotate(root);
  }

  return root;
}

int main()
{
  Node *root = NULL;

  BinaryTree avl;
  root = avl.insertAtAVL(root, 60);
  root = avl.insertAtAVL(root, 70);
  root = avl.insertAtAVL(root, 65);

  avl.preOrder(root);
  
}