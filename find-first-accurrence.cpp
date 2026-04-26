//find first accurrence (position) of the sorted array
#include <iostream>
#include <vector>
using namespace std;

int firstaccurrence(vector<int> &arr, int target)
{
  int ans = -1;

  int start = 0;
  int end = arr.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      ans = mid;
      end = mid - 1;       // go left for first accurrence
    }

    else if(arr[mid] < target){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return ans;
};

int main()
{
  vector<int> arr = {2,3,3,4,5,5,6,8,9};

  int tar = 5;

  cout << "first accurrence index : " << firstaccurrence(arr, tar);
}