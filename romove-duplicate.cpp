#include <iostream>
#include <vector>
using namespace std;
void removeduplicate(vector<int> &arr)
{
  int k = 1;
  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i] != arr[k - 1])
    {
      swap(arr[k], arr[i]);
      k++;
    }
  }
  // return k;
}
int main()
{
  vector<int> arr = { 0, 0, 1, 1, 2, 3, 3, 4, 2, 4, 1};

  removeduplicate(arr);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}