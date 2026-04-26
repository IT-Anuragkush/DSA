#include <iostream>
#include <vector>
using namespace std;

class Stack
{
  vector<int> arr;

public:

  bool empty();   // return true if array is empty
  // bool full();    // vector is dynamic thats why we can't use full.
  void push(int data);  // insert the alement into the stack
  void pop();     // remove the top element
  int top();      // return the top element
  int size();     // return the number of element present is stack


  // the time complexity of all these function is O(1).
};

// returntype classname :: functionname()   // function define outside of class

// empty() function
bool Stack :: empty()
{
  return arr.empty();
}
// push(int data) function
void Stack :: push(int data)
{
  arr.push_back(data);
}
// pop() function
void Stack :: pop()
{
  if(empty() == true)
  {
    cout << "stack is underflow" << endl;
    return;
  }
  arr.pop_back();
}
// top() function
int Stack :: top()
{
  if(empty() == true)
  {
    cout << "stack is underflow" << endl;
    return -1;
  }
  return arr.back();
}
// size() function
int Stack :: size()
{
  return arr.size();
}


int main()
{
  Stack st;

  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60); // vector is dynamic thats why here we don't have problem for overflow

  cout << "top element of the stack : " << st.top() << endl;  // 60
  st.pop();
  cout << "top element of the stack : " << st.top() << endl;  // 50
  st.pop();
  cout << "top element of the stack : " << st.top() << endl;  // 40
}