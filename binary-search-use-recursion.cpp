#include <iostream>
using namespace std;

bool search(int arr[], int start, int end, int target)
{
  if(start > end)
  {
    return false;
  }
  int mid = start + (end - start) / 2;

  if(arr[mid] == target)
  {
    return true;
  } 
  else if(arr[mid] < target)
  {
    return search(arr, mid+1, end, target);
  }
  else
  {
    return search(arr, start, mid-1, target);
  }
}
int main()
{
  int arr[5] = {2,4,5,6,8};  // binary search only work in sorted array
  int n = 5;
  int target;
  cout << "Enter target : " <<endl;
  cin >> target;

  // here - (arr, start, end(size-1), target) diya ja raha hai
  bool found = search(arr, 0, n-1, target);

  if(found == true)
  {
    cout << "targetFound"<<endl;
  }
  else
  {
    cout << "targetNotFound"<<endl;
  }
}

