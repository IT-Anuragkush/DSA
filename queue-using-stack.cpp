#include <iostream>
#include "stack-using-array.cpp"
// #include <stack>
using namespace std;

class Queue
{
   Stack st;
  public:
    void push(int data);
    bool empty();
    bool full();
    int size();
    int back();
    int front();
    void pop();
  
};

bool Queue :: empty()
{
  // if(st.empty() == true)
  // {
  //   cout << "Queue is underflow" << endl;
  //   return true;
  // }
  // return false;

  return st.empty();
}

bool Queue :: full()
{
  // if(st.full() == true)
  // {
  //   cout << "Queue is overflow" <<endl;
  //   return true;
  // }
  // return false;
  return st.full();
}

void Queue :: push(int data)
{
  if(st.full() == true)
  {
    cout << "Queue is overflow" <<endl;
    return;
  }
  st.push(data);
}

int Queue :: size()
{
  return st.size();
}

int Queue :: back()
{
  if(empty() == true)
  {
    cout << "Queue underflow" <<endl;
    return -1;
  }
  return st.top();
}

int Queue :: front()
{
  if(empty() == true)
  {
    cout << "Queue is underflow" <<endl;
    return -1;
  }
  
  Stack temp;
  int n = size();
  for(int i = 0; i < n-1; i++){
    int t = st.top();
    temp.push(t);
    st.pop();
  }
  
  int frnt = st.top();

  for(int i = 0; i < n-1; i++)
  {
    int t = temp.top();
    st.push(t);
    temp.pop();
  }

  return frnt;
}

void Queue :: pop()
{
  if(empty() == true)
  {
    cout << "Queue underflow" <<endl;
    return;
  }

  Stack temp;
  int n = size();
  for(int i = 0; i < n-1; i++){
    int t = st.top();
    temp.push(t);
    st.pop();
  }
  
  st.pop();

  for(int i = 0; i < n-1; i++)
  {
    int t = temp.top();
    st.push(t);
    temp.pop();
  }
}

int main(){

  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  cout <<"Front Element : " <<q.front() <<endl;
  cout <<"back Element : " <<q.back() <<endl;
  
  q.pop();
  
  cout <<"Front Element : " <<q.front() <<endl;
  cout <<"back Element : " <<q.back() <<endl;
  
  q.push(60);

  cout <<"Front Element : " <<q.front() <<endl;
  cout <<"back Element : " <<q.back() <<endl;
}