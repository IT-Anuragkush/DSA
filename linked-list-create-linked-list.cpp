#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

int main()
{
  // Create nodes
  Node *first = new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30);

  // Connect nodes
  first->next = second;
  second->next = third;

  // Head pointer
  Node *head = first;

  // Print linked list
  // while (head != NULL)
  // {
  //   cout << head->data << " ";
  //   head = head->next;
  // }

  // Print linked list
  Node *temp = head; // or

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}