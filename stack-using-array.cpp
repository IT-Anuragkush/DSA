#include <iostream>
#define cap 5          //here dont use semicolon
using namespace std;

class Stack
{
  int arr[cap];
  int peak;   // int count;

public:
  Stack()
  {
    peak = -1;   // count = 0;  // or
  }

  bool empty();   // return true if array is empty
  bool full();    // return true if stack is full
  void push(int data);  // insert the alement into the stack
  void pop();     // remove the top element
  int top();      // return the top element
  int size();     // return the number of element present is stack

};

// returntype classname :: functionname()   // function define outside of class

// empty() function
bool Stack :: empty()
{
  if(peak == -1)   // insteed of we can write -  return peak == - 1;
  {
    return true;       
  }
  return false;
}
// full() function
bool Stack :: full()
{
  if(peak == cap-1)   // insteed of we can write - return peak == cap-1;
  {
    return true;
  }
  return false;
}
// push(int data) function
void Stack :: push(int data)
{
  if(full() == true)
  {
    cout << "stack is overflow" << endl;
    return;
  }
  peak++;
  arr[peak] = data;
}
// pop() function
void Stack :: pop()
{
  if(empty() == true)
  {
    cout << "stack is underflow" << endl;
    return;
  }
  peak--;
}
// top() function
int Stack :: top()
{
  if(empty() == true)
  {
    cout << "stack is underflow" << endl;
    return -1;
  }
  return arr[peak];
}
// size() function
int Stack :: size()
{
  return peak+1;
}


int main()
{
  Stack st;

  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  // st.push(60);   // stack is overflow

  cout << "top element of the stack : " << st.top() << endl;  // 50
  st.pop();
  cout << "top element of the stack : " << st.top() << endl;  // 40
  st.push(60);
  // st.push(70);   // stack is overflow
  cout << "top element of the stack : " << st.top() << endl;  // 60
}