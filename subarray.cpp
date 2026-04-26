#include <iostream>
using namespace std;

void subArray(int arr[], int n)
{
  int st = 0;
  int end = st; 

  for( st = 0; st <= end; st++)
  {
    for( end = st; end < n; end++)
    {
      for(int i = st; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << " ";
    }
    cout << endl;
  }
}
int main()
{
  int arr[5] = {1,2,3,4,5};

  subArray(arr, 5);
}