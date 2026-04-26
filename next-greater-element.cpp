#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextLargerElement(vector<int> &arr)
{
  int n = arr.size();
  vector<int> ans(n);
  stack<int> st;

  for (int i = arr.size() - 1; i >= 0; i--)
  {
    while (st.empty() != true && st.top() <= arr[i])
    {
      st.pop();
    }

    if (st.empty())
    {
      ans[i] = -1;
    }
    else
    {
      ans[i] = st.top();
    }

    st.push(arr[i]);
  }
  return ans;
}

int main()
{
  vector<int> arr = {6, 8, 0, 1, 3};
  vector<int> res = nextLargerElement(arr);

  for (int x : res)
  {
    cout << x << " ";
  }
}