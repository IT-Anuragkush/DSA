#include <iostream>
#include <stack>
using namespace std;

string prefixToPostfix(string &exp)
{
  stack<string> st;

  for(int i = exp.size()-1; i >= 0; i--)
  {
    if( (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= 'a' && exp[i] <= 'z') 
    || (exp[i] >= '0' && exp[i] <= '9'))
    {
      st.push(string(1, exp[i]));   // conver string to char
    }
    else
    {
      string top1 = st.top();  
      st.pop();                
      string top2 = st.top();  
      st.pop();                

      string temp =  top1 + top2 + string(1, exp[i]) ;

      st.push(temp);

    }
  }
  return st.top();
}

int main()
{
  string prefix = "*-A/BC-/AKL" ;

  cout << "postfix expression : " << prefixToPostfix(prefix);
  
}