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

class linkedList
{
  Node *head;

  public:

  linkedList()
  {
    head = NULL;
  }

  void insertAfter(int data, int newData);
  void insertAtFront(int d);
  bool search(int data);
  void deleteNode(int data);

  void printList();
};

void linkedList::insertAtFront(int d)
{
  Node *temp = new Node;
  temp->data = d;

  if(head == NULL)
  {
    head = temp;
  }
  else
  {
    temp->next = head;
    head = temp;
  }
}

void linkedList::printList()
{
  Node *curr = head;

  while(curr != NULL)
  {
    cout << curr->data<<" ";
    curr = curr->next;
  }

  cout << endl;
}

bool linkedList::search(int data)
{
  Node *curr = head;

  while(curr != NULL)
  {
    if(curr->data == data)
    {
      return true;
    }
    curr = curr->next;
  }
  return false;
}

void linkedList::insertAfter(int data, int newData)
{
  Node *curr = head;

  Node *temp = new Node;
  temp->data = newData;

  while(curr != NULL)
  {
    if(curr->data == data)
    {
      temp->next = curr->next;
      curr->next = temp;
      return;
    }
    curr = curr->next;
  }
  temp->next = curr->next;
  curr->next = temp;
}

void linkedList::deleteNode(int data)
{
  if(head == NULL)
  {
    cout << "List is empty\n";
    return;
  }

  Node *curr = head;
  Node *prev = NULL;

  if(head->data == data)
  {
    head = head->next;
    delete curr;
    return;
  }
  while(curr != NULL)
  {
    if(curr->data == data)
    {
      prev->next = curr->next;
      delete curr;
      return;
    }
    prev = curr;
    curr = curr->next;
  }
  cout <<"data not found"<<endl;
}

int main()
{
  linkedList sll;

  sll.insertAtFront(20);
  sll.insertAtFront(30);
  sll.insertAtFront(15);
  sll.insertAtFront(50);
  sll.insertAtFront(5);

  sll.printList();

  sll.search(30) ? cout << "Element found" : cout << "Element Not found"<<endl;
  cout<<endl;

  sll.insertAfter(30, 41);

  printf("After insert data : ");
  sll.printList();
  cout<<endl;
  
  sll.deleteNode(15);  
  
  printf("After delete: ");
  sll.printList();

}