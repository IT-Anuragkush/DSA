// merge sort using recurtion

#include <iostream>
using namespace std;
void merge(int arr[], int s, int mid, int e)
{
  int i = s;
  int j = mid + 1;

  int temp[e + 1];
  int k = 0;
  while (i <= mid && j <= e)
  {
    if (arr[i] <= arr[j])
    {
      temp[k] = arr[i];
      i++;
      k++;
    }
    else
    {
      temp[k] = arr[j];
      j++;
      k++;
    }
  }

  while (i <= mid)
  {
    temp[k] = arr[i];
    i++;
    k++;
  }
  while (j <= e)
  {
    temp[k] = arr[j];
    j++;
    k++;
  }

  k = 0;
  for (int i = s; i <= e; i++)
  {
    arr[i] = temp[k];
    k++;
  }
}

void mergeSort(int arr[], int s, int e) // merge array using recursion
{
  if (s >= e)
  {
    return;
  }
  int mid = s + (e - s) / 2;
  mergeSort(arr, s, mid);     // left half
  mergeSort(arr, mid + 1, e); // right half

  merge(arr, s, mid, e);
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

  mergeSort(arr, 0, size - 1);

  cout << "Array after sorting : " << endl;
  printArray(arr, size);
}