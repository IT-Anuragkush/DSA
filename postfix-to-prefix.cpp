#include <iostream>
#include <stack>
using namespace std;

string postfixToPrefix(string &exp)
{
  stack<string> st;

  for(int i = 0; i < exp.size(); i++)
  {
    if( (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= 'a' && exp[i] <= 'z') 
    || (exp[i] >= '0' && exp[i] <= '9'))
    {
      st.push(string(1, exp[i]));   // conver string to char
    }
    else
    {
      string top2 = st.top();   
      st.pop();                 
      string top1 = st.top();   
      st.pop();                 

      string temp = string(1, exp[i]) + top1 + top2 ;

      st.push(temp);
    }
  }
  return st.top();
}

int main()
{
  string postfix = "ABC/-AK/L-*" ;

  cout << "prefix expression : " << postfixToPrefix(postfix);
  
}