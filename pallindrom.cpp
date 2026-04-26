#include <iostream>
#include <vector>
using namespace std;

bool palindromcheck(vector<int> &arr)
{
  int s = 0;
  int e = arr.size() - 1;

  while (s <= e)
  {
    if (arr[s] != arr[e])
    {
      return false;
    }
    s++;
    e--;
  }
  return true;
}
int main()
{
  vector<int> arr = {1, 2, 3, 3, 2, 1};

  // pallindromcheck(arr);

  if (palindromcheck(arr) == true)
  {
    cout << "array is palindrom ";
  }
  else
    cout << "array is not palindrom ";
}