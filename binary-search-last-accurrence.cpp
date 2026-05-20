//search last accurrence
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
  int start = 0;
  int end = arr.size() - 1;

  int ans = -1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      ans = mid;     // store answer
      start = mid + 1;  // move right for last occurrence
    }
    else if (target < arr[mid])
    {
      end = mid - 1;
    }
    else
      start = mid + 1;
  }
  return ans;
}
int main()
{
  vector<int> arr = {0, 1, 3, 4, 6, 6, 6, 7, 9};

  int index = binarySearch(arr, 6);
  if(index != -1)
  {
    cout << "Elementy found at index : " << index << endl;
  } 
  else{
    cout << "Elementy not found";
  }
}