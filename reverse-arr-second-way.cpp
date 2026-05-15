#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
  int brr[n];

  int j = 0;

  for (int i = n - 1; i >= 0; i--)
  {
    brr[j] = arr[i];
    j++;
  }

  // print reversed array
  for (int i = 0; i < n; i++)
  {
    cout << brr[i] << " ";
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;

  reverseArray(arr, n);

  return 0;
}