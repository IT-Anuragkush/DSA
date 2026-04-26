// tail recursion
// When the recursive call is the last operation, it is called tail recursion.
// work → recursive call
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  if(size == 0)
  {
    return;
  }
  cout << arr[size-1] << " ";    // work first
  printArray(arr, size-1);       // then recursive call
}

int main()
{
  int arr[5] = {12, 3, 5, 20, 15};
  int size = 5;

  printArray(arr, size);

}