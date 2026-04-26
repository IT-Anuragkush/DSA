// stack using queue

  // stack - LIFO 
  // Queue - FIFO - push() pop() front() back() empty() full() size()

#include <iostream>
#include"Queue-circular-queue.cpp"
// #include <Queue>
using namespace std;

class Stack
{
  Queue q;

  public:
    bool empty();
    bool full();
    int size();
    int top();
    void push(int data);
    void pop();
    
};

bool Stack :: empty()
{
  // if(q.empty() == true)
  // {
  //   return true;
  // }
  // return false;

  return q.empty();
}

bool Stack :: full()
{
  // if(q.full() == true)
  // {
  //   return true;
  // }
  // return false;

  return q.full();
}

int Stack :: size()
{
  return q.size();
}

void Stack :: push(int data)
{
  if(full() == true)
  {
    cout << "stack is overflow" << endl;
    return;
  }
  q.push(data);
}

int Stack :: top()
{
  if(empty() == true)
  {
    cout << "stack is underflow" << endl;
    return -1;
  }
  return q.back();
}

void Stack :: pop()
{
  if(empty() == true)
  {
    cout << "stack is underflow" <<endl;
    return;
  }

  for(int i = 0; i < q.size()-1; i++)
  {
    int f = q.front();
    q.pop();
    q.push(f);
  }
  q.pop();

}

int main()
{
  Stack st;

  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  // st.push(60);

  cout << "Top Element : " << st.top() << endl;
  
  st.pop();
  
  cout << "Top Element : " << st.top() << endl;

}