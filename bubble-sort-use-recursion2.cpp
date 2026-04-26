#include <iostream>
using namespace std;
void comparision(int arr[], int i, int size)
{
  if(i == size)
  {
    return;
  }
  if(arr[i] > arr[i+1])
  {
    swap(arr[i], arr[i+1]);
  }
  comparision(arr, i+1, size);
}
void bubbleSort(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    comparision(arr, 0, size-1);
  }
} 
void printArray(int arr[], int size)
{
  if(size == 0)
  {
    return;
  }
  printArray(arr, size-1);       // head recursion
  cout << arr[size-1] << " ";    
}

int main()
{
  int arr[5] = {12, 3, 5, 20, 15};
  int size = 5;

  cout << "Array before sorting" << endl;
  printArray(arr, size);
  cout << endl;

  bubbleSort(arr, size);

  cout << "Array after sorting" << endl;
  printArray(arr, size);
}