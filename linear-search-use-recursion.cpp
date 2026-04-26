#include <iostream>
using namespace std;

bool search(int arr[], int size, int target)
{
  if(size == 0)
  {
    return false;
  }
  if(arr[size-1] == target)
  {
    return true;
  }
  return search(arr, size-1, target);
}
int main()
{
  int arr[5] = {5, 6, 5, 4, 2};

  int target;
  cout << "Enter target : " <<endl;
  cin >> target;

  bool found = search(arr, 5, target);

  if(found)
  {
    cout << "targetFound"<<endl;
  }
  else
  {
    cout << "targetNotFound"<<endl;
  }
}