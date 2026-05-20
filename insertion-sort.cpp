// Algorithm : 
// 1. Second element se start karo.
// 2. Current element ko key maan lo.
// 3. Previous sorted part me uski correct position find karo.
// 4. Bade elements ko right shift karo.
// 5. key ko insert karo.

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
  for(int i = 0; i < n; i++)
  {
    int currelem = arr[i];
    int j = i;

    while (j > 0 && arr[j-1] > currelem)
    {
      arr[j] = arr[j-1];
      j--;
    }
    arr[j] = currelem;


    // int curr = arr[i];
    // int prev = i-1;

    // while (prev >= 0 && arr[prev] > curr)
    // {
    //   arr[prev+1] = arr[prev];
    //   prev--;
    // }
    // arr[prev+1] = curr;   //placing the curr ele in it correct positiion
    


    // int j = i;

    // while (j > 0 && arr[j-1] > arr[j])
    // {
    //   swap(arr[j-1] , arr[j]);
    //   j--;
    // }
  }
}

int main()
{
  int arr[] = {23, 1, 10, 5, 2};
  int n = 5;

  insertionSort(arr, n);

  cout << "array after sort " << endl;
  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}


  