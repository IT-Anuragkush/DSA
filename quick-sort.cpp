#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
  int pivot = arr[s];
  int i = s;
  int j = e;

  while(i < j)
  {
    while ( i <= e-1 && arr[i] <= pivot)
    {
      i++;
    }
    while ( j >= s + 1 && arr[j] > pivot )
    {
      j--;
    }
    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[j], arr[s]);
  return j;

  // or

  // int pivot = arr[s]; // first element as pivot
  // int i = s + 1;

  // for (int j = s + 1; j <= e; j++)
  // {
  //   if (arr[j] < pivot)
  //   {
  //     swap(arr[i], arr[j]);
  //     i++;
  //   }
  // }
  // // place pivot at correct position
  // swap(arr[s], arr[i - 1]);
  // return i - 1; // pivot index
}

void quickSort(int arr[], int s, int e)
{
  // code here
  if (s >= e)
  {
    return;
  }
  int part = partition(arr, s, e);

  quickSort(arr, s, part - 1);
  quickSort(arr, part + 1, e);
}

void printArray(int arr[], int size) // print array
{
  if (size == 0)
  {
    return;
  }
  printArray(arr, size - 1);
  cout << arr[size - 1] << " ";
}

int main()
{
  int arr[] = {12, 3, 6, 78, 9};
  int size = 5;

  cout << "Array before sorting : " << endl;
  printArray(arr, size);
  cout << endl;

  quickSort(arr, 0, size - 1);

  cout << "Array after sorting : " << endl;
  printArray(arr, size);
}