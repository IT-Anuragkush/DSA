#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int> &arr, int target)
{
  int first = -1;
  int last = -1;

  // find first occurrence
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == target)
    {
      first = i;
      break;
    }
  }

  // find last occurrence
  for (int i = arr.size() - 1; i >= 0; i--)
  {
    if (arr[i] == target)
    {
      last = i;
      break;
    }
  }

  return {first, last};
}

int main()
{
  vector<int> arr = {1, 2, 4, 4, 5, 4, 5, 7};
  int target = 4;

  vector<int> ans = searchRange(arr, target);

  cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
}