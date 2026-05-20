#include <iostream>
using namespace std;

// bool linearSearch(int arr[], int size, int target)
// {
//   if(size == 0)
//   {
//     return false;
//   }
//   if(arr[size-1] == target)
//   {
//     return true;
//   }
//   return search(arr, size-1, target);
// }

bool linearSearch(int arr[], int index, int target, int n)
{
    // base case
    if (index == n)
    {
      return false;
    }

    // target found
    if (arr[index] == target)
    {
      return true;
    }

    // recursive call
    return linearSearch(arr, index + 1, target, n);
}
int main()
{
  int arr[5] = {5, 6, 5, 4, 2};

  int target;
  cout << "Enter target : " <<endl;
  cin >> target;

  // bool found = search(arr, 5, target);
  bool found = linearSearch(arr, 0, target, 5);

  if(found)
  {
    cout << "targetFound"<<endl;
  }
  else
  {
    cout << "targetNotFound"<<endl;
  }
}