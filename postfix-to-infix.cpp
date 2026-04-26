#include <iostream>
#include <stack>
using namespace std;

string postfixToInfix(string &exp)
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
      string top2 = st.top();  // top - b
      st.pop();                // remove - b
      string top1 = st.top();  // after remove - b now top - a
      st.pop();                // now remove - a

      string temp = "(" + top1 + string(1, exp[i]) + top2 + ")" ;

      st.push(temp);
    }
  }
  return st.top();
}

int main()
{
  string postfix = "ab*c+" ;

  cout << "infix expression : " << postfixToInfix(postfix);
  
}