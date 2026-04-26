// binary search tree(BST)

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

class BinarySearchTree
{
  public:
    Node* createTree(Node *root, int d);

    void preOrder(Node *root);
    void inOrder(Node *root);
    void postOrder(Node *root);

    bool search(Node *root, int d);
    bool searchRecursion(Node *root, int d);

    Node* deleteNode(Node* root, int d);

    int getMin(Node* root);
};

Node* BinarySearchTree::createTree(Node *root, int d)
{
  if(root == NULL)
  {
    Node *temp = new Node;
    temp->data = d;
    return temp;
  }

  if(root->data < d)
  {
    root->right = createTree(root->right, d);
  }
  else
  {
    root->left = createTree(root->left, d);
  }

  return root;
}

void BinarySearchTree::preOrder(Node *root)
{
  if(root == NULL)
      return;

  cout << root->data <<" ";
  preOrder(root->left);
  preOrder(root->right);
}

void BinarySearchTree::inOrder(Node *root)
{
  if(root == NULL)
      return;

  inOrder(root->left);
  cout << root->data <<" ";
  inOrder(root->right);
}

void BinarySearchTree::postOrder(Node *root)
{
  if(root == NULL)
      return;

  postOrder(root->left);
  postOrder(root->right);
  cout << root->data <<" ";
}

int BinarySearchTree :: getMin(Node *root)
{
  if(root == NULL)
  {
    return -1;
  }
  Node *cur = root;

  while(cur->left != NULL)
  {
    cur = cur->left;
  }
  return cur->data;
}

bool BinarySearchTree :: search(Node *root, int d)
{
  if(root == NULL)
    return false;

  Node *cur = root;

  while(cur != NULL)
  {
    if(cur->data == d)
      return true;
    else if(cur->data < d)
    {
      cur = cur->right;
    }
    else{
      cur = cur->left;
    }
  }
  return false;
}

bool BinarySearchTree::searchRecursion(Node *root, int d)
{
  if(root == NULL)
    return false;

  if(root->data == d)
  {
    return true;
  }
  else if(root->data < d)
    return searchRecursion(root->right, d);
  else
    return searchRecursion(root->left, d);
}

Node* BinarySearchTree::deleteNode(Node* root, int d)
{
  if(root == NULL)
    return NULL;

  if(root->data == d)
  {
    // delete
    if(root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }
    if(root->left == NULL && root->right != NULL)
    {
      Node *temp = root->right;
      delete root;
      return temp;
    }
    if(root->left != NULL && root->right == NULL)
    {
      Node *temp = root->left;
      delete root;
      return temp;
    } 
    if(root->left != NULL && root->right != NULL)
    {
      int min = getMin(root->right);
      root->data = min;
      root->right = deleteNode(root->right, min);
      return root;
    }
  }
  else if(root->data < d)
    root->right = deleteNode(root->right, d);
  else
    root->left = deleteNode(root->left, d);

  return root;
}

int main()
{
  BinarySearchTree bst;

  Node *root = NULL;

  root = bst.createTree(root, 50);
  root = bst.createTree(root, 30);
  root = bst.createTree(root, 70);
  root = bst.createTree(root, 40);
  root = bst.createTree(root, 60);

  // cout << "Preorder traversal : ";
  // bst.preOrder(root);
  // cout << endl;

  root = bst.deleteNode(root, 50);

  cout << "Inorder traversal : ";
  bst.inOrder(root);
  cout << endl;

  // cout << "Postorder traversal : ";
  // bst.postOrder(root);
  // cout << endl;

}