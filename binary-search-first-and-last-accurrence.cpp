#include <iostream>
#include <vector>
using namespace std;

vector<int> binarySearch(vector<int> &arr, int target)
{
  int first = -1;
  int last = -1;

  // find first occurrence
  int start = 0;
  int end = arr.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      first = mid;
      end = mid - 1;
    }
    else if (target < arr[mid])
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  // find last occurrence
  start = 0;
  end = arr.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      last = mid;
      start = mid + 1;
    }
    else if (target < arr[mid])
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  return {first, last};
}

int main()
{
  vector<int> arr = {0, 1, 3, 4, 6, 6, 6, 7, 9};

  vector<int> ans = binarySearch(arr, 6);

  cout << "[" << ans[0] << "," << ans[1] << "]";
  // for(int x : ans)
  // {
  //   cout << x << endl;
  // }
}