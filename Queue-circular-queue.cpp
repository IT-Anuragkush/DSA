#include <iostream>
#define cap 5
using namespace std;

class Queue
{
  int arr[cap];
  int frnt;
  int rear;
  int count;

  public:
    Queue()
    {
      frnt = 0;
      count = 0;
    }

    bool empty();
    bool full();
    void push(int data);
    void pop();
    int front();
    int back();
    int size();
    
};
  
  bool Queue::empty()
  {
    if(count == 0)
    {
      return true;
    }
    return false;
  }

bool Queue::full()
{
  if(count == cap)
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
  rear = (frnt + count) % cap;
  arr[rear] = data;
  count++;
}

void Queue::pop()
{
  if(empty() == true)
  {
    cout << "Queue Underflow"<<endl;
    return;
  }
  frnt = (frnt + 1) % cap;
  count--;
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
  rear = (frnt + count -1) % cap;
  return arr[rear];
}

int Queue::size()
{
  return count;
}


// int main()
// {
//   Queue q;

//   q.push(10);
//   q.push(20);
//   q.push(30);
//   q.push(40);
//   q.push(50);

//   cout << "front element :" << q.front() <<endl;
//   cout << "bach element :" << q.back() <<endl;
  
//   q.pop();
  
//   cout << "front element :" << q.front() <<endl;
//   cout << "bach element :" << q.back() <<endl;
  
//   q.push(60);

//   cout << "front element :" << q.front() <<endl;
//   cout << "bach element :" << q.back() <<endl; // 50 not 60

// }