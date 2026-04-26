#include <iostream>
using namespace std;

class Node
{
  public:
    int data;
    Node *next;
    Node *prev;

  Node()
  {
    next = NULL;
    prev = NULL;
  }
};

class LinkedList
{
  Node *head;
  Node *tail;

  public:
  LinkedList()
  {
    head = NULL;
  }

  void insertAtFront(int d);
  void insertAtBack(int d);
  bool search(int data);
  void deleteNode(int data);
  void printList();
  void printListReverse();
};

void LinkedList::insertAtFront(int d)
{
  Node *temp = new Node;
  temp->data = d;
  if(head == NULL)
  {
    head = temp;
    tail = temp;
  }
  else{
    head->prev = temp;
    temp->next = head;
    head = temp;
  }
}

void LinkedList::insertAtBack(int d)
{
  Node *temp = new Node;
  temp->data = d;
  if(head == NULL)
  {
    head = temp;
    tail = temp;
  }
  else{
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
  }
}

void LinkedList::printList()
{
  Node *cur = head;

  while(cur != NULL)
  {
    cout<<cur->data << " ";
    cur = cur->next;
  }
  cout << endl;
}

void LinkedList::printListReverse()
{
  Node *cur = tail;

  while(cur != NULL)
  {
    cout << cur->data <<" ";
    cur = cur->prev;
  }
  cout << endl;
}

bool LinkedList::search(int data)
{
  Node *cur = head;

  while(cur != NULL)
  {
    if(cur->data == data)
    {
      return true;
    }
    cur = cur->next;
  }
  return false;
}

void LinkedList::deleteNode(int data)
{
  Node *cur = head;

  while(cur != NULL)
  {
    //delete
    if(cur->prev == NULL)
    {
      head = head->next;
    }
    else{
      cur->prev->next = cur->next;
    }
    if(cur->next == NULL)
    {
      tail = tail->prev;
    }
    else{
      cur->next->prev = cur->prev;
    }
    delete cur;
    return;
  }
  cur = cur->next;
}


int main()
{
  LinkedList dll;

  dll.insertAtFront(10);
  dll.insertAtFront(20);
  dll.insertAtFront(30);
  dll.insertAtFront(40);

  dll.printList();
  
  int result = dll.search(20);
  if(result)
  {
    cout << "found\n";
  }
  else{
    cout << "Not found \n";
  }

  dll.printList();
  dll.printListReverse();

  dll.deleteNode(40);
  dll.printList();

}