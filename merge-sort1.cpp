#include <iostream>
using namespace std;

void mergeSort(int arr[], int n)
{
  
  int s = 0;
  int e = n-1;

  int temp[n];
  
  int mid = s + (e - s)/2;

  int i = s;
  int j = mid + 1;

  int k = s;
  while(i <= mid && j <= e)
  {
    if(arr[i] <= arr[j])
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

  while(i <= mid)
  {
    temp[k] = arr[i];
    i++;
    k++;
  }
  while(j <= e)
  {
    temp[k] = arr[j];
    j++;
    k++;
  }

  for(int i = 0; i < n; i++)
  {
    arr[i] = temp[i];
  }
}

int main()
{
  int arr[5] = {12, 3, 6, 78, 9};
  int size = 5;

  cout << "Array before sorting : " << endl;
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << "\t";
  }

  cout << endl;

  mergeSort(arr, size);

  cout << "Array after sorting : " << endl;
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << "\t";
  }
}