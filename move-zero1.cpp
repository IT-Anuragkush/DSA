#include <iostream>
#include <vector>
using namespace std;
void movezero(vector<int> &arr)
{
  int k = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[k]);
      k++;
    }
  }
  // cout<< "after move zero : ";
  // for(int i = 0; i<arr.size();i++){
  //   cout << arr[i] << " ";
  // }
}
int main()
{
  vector<int> arr = {4, 0, 5, 9, 7, 0, 0, 5, 0, 6, 0, 3};

  movezero(arr);

  cout << "after move zero : ";
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}