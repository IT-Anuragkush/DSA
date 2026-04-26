#include <iostream>
using namespace std;

void sumOfArray(int arr[], int size, int &sum)
{
  if(size == 0)
  {
    return;
  }
  sum += arr[size-1];
  return sumOfArray(arr, size-1, sum);
}
int main()
{
  int arr[5] = {2, 3, 5, 4, 2};

  int sum = 0;

  sumOfArray(arr, 5, sum);

  cout << "sum of array : "<<  sum <<endl;
}