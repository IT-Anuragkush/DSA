// Algorithm : 
// 1. Adjacent elements compare karo.
// 2. Agar wrong order me hain to swap karo.
// 3. Har pass me largest element end me fix ho jata hai.
// 4. Process repeat karo.

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