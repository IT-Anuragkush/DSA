#include <iostream>
#include <stack>
using namespace std;

int getpriority(char ch)
{
  if (ch == '^')
  {
    return 3;
  }
  else if (ch == '*' || ch == '/')
  {
    return 2;
  }
  else if (ch == '+' || ch == '-')
  {
    return 1;
  }

  return 0;
}

string infixToPostfix(string &s)
{
  // code here
  stack<char> st;
  string ans = "";

  for (int i = 0; i < s.size(); i++)
  {
    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
    {
      ans.push_back(s[i]); // operand
    }

    else if (s[i] == '(')
    {
      st.push(s[i]);
    }
    else if (s[i] == ')')
    {
      while (st.empty() != true && st.top() != '(')
      {
        ans.push_back(st.top());
        st.pop();
      }
      st.pop();
    }

    else
    {
      if (s[i] == '^')
      {
        st.push(s[i]);
      }
      else
      {
        while (st.empty() != true && getpriority(s[i]) <= getpriority(st.top()))
        {
          ans.push_back(st.top());
          st.pop();
        }
        st.push(s[i]);
      }
    }
  }
  while (st.empty() != true)
  {
    ans.push_back(st.top());
    st.pop();
  }
  return ans;
}

int main()
{
  string infix = "a*(b+c)/d";

  cout << "postfix expresion : " << infixToPostfix(infix);
}