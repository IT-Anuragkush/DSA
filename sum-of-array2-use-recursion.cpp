#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
  if(size == 0)
  {
    return 0;
  }
  return arr[size-1] + sumOfArray(arr, size-1);
}
int main()
{
  int arr[5] = {2, 3, 5, 4, 2};

  int sum = sumOfArray(arr, 5);

  cout << "sum of array : "<<  sum <<endl;
}