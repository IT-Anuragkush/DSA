#include <iostream>
using namespace std;

class Node
{
  public:
    int data;
    Node *next;

  Node()
  {
    next = NULL;
  }
};

class LinkedList
{
  Node *head;

  public:
  LinkedList()
  {
    head = NULL;
  }

  void insertAtFront(int d);
  void insertAfter(int data, int newData);
  bool search(int data);
  void deleteNode(int data);

  void printList();

};

void LinkedList::insertAtFront(int d)
{
  Node *temp = new Node;
  temp->data = d;

  if(head == NULL)
  {
    head = temp;
    head->next = head;
  }
  else{
    temp->next = head;
    Node *cur = head;

    while(cur->next != head)
    {
      cur = cur->next;
    }
    cur->next = temp;
    head = temp;
  }
}

void LinkedList::insertAfter(int data, int newData)
{
  if(head == NULL)
  {
    return;
  } 
    
  Node *cur = head;

  do {
    if(cur->data == data)
    {
      Node *temp = new Node;
      temp->data = newData;

      temp->next = cur->next;
      cur->next = temp;
      return;
    }
    cur = cur->next;
  } while(cur != head);
}

bool LinkedList::search(int data)
{
  if(head == NULL) 
  {
    return false;
  }

  Node *cur = head;

  do {
    if(cur->data == data)
    {
      return true;
    }
    cur = cur->next;
  } while(cur != head);

  return false;
}

void LinkedList::deleteNode(int data)
{
  if(head == NULL) 
  {
    return;
  }

  Node *cur = head;
  Node *prev = NULL;

  // Deleting head node
  if(head->data == data)
  {
    // Only one node
    if(head->next == head)
    {
      delete head;
      head = NULL;
      return;
    }

    // Find last node
    Node *last = head;
    while(last->next != head)
    {
      last = last->next;
    }

    Node *temp = head;
    head = head->next;
    last->next = head;

    delete temp;
    return;
  }

  // Delete non-head node
  prev = head;
  cur = head->next;

  while(cur != head)
  {
    if(cur->data == data)
    {
      prev->next = cur->next;
      delete cur;
      return;
    }
    prev = cur;
    cur = cur->next;
  }
}

void LinkedList::printList()
{
  Node *cur = head;

  do
  {
    cout << cur->data<<" ";
    cur = cur->next;

  }while(cur != head);

  cout << endl;
}


int main()
{
  LinkedList cll;

  cll.insertAtFront(10);
  cll.insertAtFront(8);
  cll.insertAtFront(15);
  cll.insertAtFront(12);

  cll.printList();

  cll.insertAfter(8, 20);
  cout << "After inserting 20 after 8: ";
  cll.printList();

  if(cll.search(15))
    cout << "15 found in list" << endl;
  else
    cout << "15 not found" << endl;

  if(cll.search(100))
    cout << "100 found in list" << endl;
  else
    cout << "100 not found" << endl;

  cll.deleteNode(12);
  cout << "After deleting 12 (head) : ";
  cll.printList();

  cll.deleteNode(20);
  cout << "After deleting 20 : ";
  cll.printList();

  cll.deleteNode(10);
  cout << "After deleting 10 : ";
  cll.printList();

}