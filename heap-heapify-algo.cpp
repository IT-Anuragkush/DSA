// Heapify Algorithm...........

/*
  It covert a random data into a max / min heap

  int arr = {13,56,11,34,66,76,10,12,25};
*/

#include <iostream>
using namespace std;

void heapify(int arr[], int size, int index)
{
  int smallest = index;
  int lc = 2 * index + 1;
  int rc = 2 * index + 2;

  if (lc < size && arr[lc] < arr[smallest])
  {
    smallest = lc;
  }

  if (rc < size && arr[rc] < arr[smallest])
  {
    smallest = rc;
  }

  if (smallest != index)
  {
    swap(arr[index], arr[smallest]);
    heapify(arr, size, smallest);
  }
}

int main()
{
  int arr[] = {13, 56, 11, 34, 66, 76, 10, 12, 25};
  int size = 9;

  for (int i = (size / 2) - 1; i >= 0; i--)
  {
    heapify(arr, size, i);
  }

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "  ";
  }
}