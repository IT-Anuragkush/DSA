// Algorithm : 
// 1. Array ka smallest element find karo.
// 2. Use first position se swap karo.
// 3. Fir second position ke liye repeat karo.
// 4. Ye process end tak chalta hai.

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for(int i = 0; i < n; i++)
  {
    // int max = i;
    // for(int j = max+1; j < n; j++)
    // {
    //   if(arr[j] > arr[max])
    //   {
    //     max = j;
    //   }
    // }
    // swap(arr[i], arr[max]);

    
    int min = i;
    for(int j = i+1; j < n; j++)
    {
      if(arr[j] < arr[min])
      {
        min = j;
      }
    }
    swap(arr[i], arr[min]);
  }
}
int main()
{
  int arr[] = {4, 1, 3, 9, 7};
  int n = 5;

  selectionSort(arr, n);

  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}