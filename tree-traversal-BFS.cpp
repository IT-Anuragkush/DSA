#include <iostream>
#include <queue>
using namespace std;

// Define Node class
class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int d)
  {
    data = d;
    left = right = NULL;
  }
};

// Level Order Traversal using queue library
// void levelOrder(Node *root) 
// {
//   if (!root)
//     return;

//   queue<Node *> q;
//   q.push(root);

//   while (!q.empty())
//   {
//     Node *node = q.front();
//     q.pop();

//     cout << node->data << " ";

//     if (node->left)
//       q.push(node->left);
//     if (node->right)
//       q.push(node->right);
//   }
// }

// Level Order Traversal without using queue library
void levelOrder(Node *root)
{
  if (root == NULL)
    return;

  // Create a simple array queue
  Node *queue[100]; // assume max 100 nodes
  int front = 0;
  int rear = 0;

  // enqueue root
  queue[rear++] = root;

  while (front < rear)
  {
    Node *current = queue[front++];

    cout << current->data << " ";

    // enqueue left child
    if (current->left != NULL)
    {
      queue[rear++] = current->left;
    }

    // enqueue right child
    if (current->right != NULL)
    {
      queue[rear++] = current->right;
    }
  }
}

// Example usage
int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  cout << "Level Order Traversal: ";
  levelOrder(root);

  return 0;
}