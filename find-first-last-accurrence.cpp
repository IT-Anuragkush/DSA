#include <iostream>
#include <vector>
using namespace std;

vector<int> firstlastaccurrence(vector<int> &arr, int target)
{
  vector<int> ans(2, -1);

  int start = 0;
  int end = arr.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      ans[0] = mid;
      end = mid - 1;       // go left for first accurrence
    }

    else if(arr[mid] < target){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }

  start = 0;
  end = arr.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      ans[1] = mid;
      start = mid + 1;      // go right for last accurrence
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
  vector<int> arr = {2,3,4,5,5,6,5,8,9};

  int tar = 5;

  vector<int> vec = firstlastaccurrence(arr, tar);

  for(int x : vec){
    cout << x << " ";
  }
}