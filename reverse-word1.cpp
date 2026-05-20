#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
  string str = "I love coding";

  stringstream ss(str);
  stack<string> st;

  string word;

  // words ko stack me store karo
  while (ss >> word)
  {
    st.push(word);
  }

  // reverse order me print karo
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }

  return 0;
}