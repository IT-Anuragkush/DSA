// head recursion
// When the recursive call happens before the work, it is called head recursion.

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  if(size == 0)
  {
    return;
  }
  printArray(arr, size-1);       // recursive call
  cout << arr[size-1] << " ";    // then work
}

int main()
{
  int arr[5] = {12, 3, 5, 20, 15};
  int size = 5;

  printArray(arr, size);

}