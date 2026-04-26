#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n-1; j++)   // j < n-i-1 - if we want skip sorted part
    {
      if(arr[j] > arr[j+1])
      {
        swap(arr[j], arr[j+1]);
      }
    }
  }
}
int main()
{
  int arr[] = {5,1,3,7,6,9,2};

  int n = 7;
  bubbleSort(arr, n);

  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}