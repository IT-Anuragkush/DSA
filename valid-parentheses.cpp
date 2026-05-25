#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
  stack<char> st;

  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] == '(' || s[i] == '[' || s[i] == '{') // opening
    {
      st.push(s[i]);
    }

    else  // closing
    {
      if(st.empty() == true)
      {
        return false;
      }

      // matching
      if((s[i] == ')' && st.top() == '(') ||
         (s[i] == ']' && st.top() == '[') || 
         (s[i] == '}' && st.top() == '{') )
      {
      st.pop();
      } 
      else{  // no matching found
        return false;
      }
    }
  }
  return st.empty();
}

int main()
{
  string str = "()[]{}";

  if(isValid(str))
  {
    cout << "valid parantheses" << endl;
  }
  else{
    cout << "Not valid parantheses" << endl;
  }


}