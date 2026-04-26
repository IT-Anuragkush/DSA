// Queue -it is a linear data structure works on the principle of FIFO(first in first out)
// type of queue:
//     1. Normal queue
//     2. Circular queue
//     3. Deque
//     4. priority queue

// operation of queue : 
//        1. push()- insert the element from rear into the Queue.
//        2. pop()- remove the front element of queue.
//        3. front()- return the front element.
//        4. back()- return the back element.
//        5. empty()- return true if array is empty.
//        6. full()- return true if array is full.
//        7. size()- return the no of element present in queue.

#include <iostream>
#define cap 5
using namespace std;

class Queue
{
  int arr[cap];
  int frnt;
  int rear;

  public:
    Queue()
    {
      frnt = 0;
      rear = 0;
    }

    bool empty();
    bool full();
    void push(int data);
    void pop();
    int front();
    int back();
    int size();

};

bool Queue::full()
{
  if(rear == cap)
  {
    return true;
  }
  return false;
}

void Queue::push(int data)
{
  if(full() == true)
  {
    cout << "Queue Overflow"<<endl;
    return;
  }
  arr[rear] = data;
  rear++;
}

bool Queue::empty()
{
  if(frnt == rear)
  {
    return true;
  }
  return false;
}

void Queue::pop()
{
  if(empty() == true)
  {
    cout << "Queue Underflow"<<endl;
    return;
  }
  frnt++;
}

int Queue::front()
{
  if(empty() == true)
  {
    cout << "Queue Underflow" <<endl;
    return -1;
  }
  return arr[frnt];
}

int Queue::back()
{
  if(empty() == true)
  {
    cout << "Queue Underflow"<<endl;
    return -1;
  }
  return arr[rear-1];
}

int Queue::size()
{
  return rear - frnt;
}


int main()
{
  Queue q;

  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  cout << "front element :" << q.front() <<endl;
  cout << "bach element :" << q.back() <<endl;
  
  q.pop();
  
  cout << "front element :" << q.front() <<endl;
  cout << "bach element :" << q.back() <<endl;
  
  q.push(60);

  cout << "front element :" << q.front() <<endl;
  cout << "bach element :" << q.back() <<endl; // 50 not 60
}