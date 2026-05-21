#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
  
  int pivot = arr[e]; // last element as pivot
  int idx = s - 1;

  for (int j = s; j < e; j++)
  {
    if (arr[j] <= pivot)   // for desending order if (arr[j] >= pivot)
    {
      idx++;
      swap(arr[idx], arr[j]);
    }
  }
  // place pivot at correct position
  idx++;
  swap(arr[e], arr[idx]);
  return idx; 
}

void quickSort(int arr[], int s, int e)
{
  
  if (s < e)
  {
    int part = partition(arr, s, e);
  
    quickSort(arr, s, part - 1);
    quickSort(arr, part + 1, e);
  }
}

int main()
{
  int arr[] = {12, 3, 6, 78, 9};
  int size = 5;

  cout << "Array before sorting : " << endl;
  for(int i = 0; i < 5; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << endl;

  quickSort(arr, 0, size - 1);

  cout << "Array after sorting : " << endl;
  for(int i = 0; i < 5; i++)
  {
    cout << arr[i] << "\t";
  }
}