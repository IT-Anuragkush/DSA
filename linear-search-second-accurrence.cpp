#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int target)
{
  int count = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == target)
    {
      count++;

      if(count == 2)  // for second accurrence
      {
        return i;     // second accurence at 4 index
      }
    }
  }
  return -1;
}

int main()
{
  vector<int> arr = {20, 50, 60, 90, 60, 80, 50, 60, 20};
  int target = 60;

  int index = linearSearch(arr, target);

  if (index != -1)
  {
    cout <<"Element found at index : " << index << endl;
  }
  else
    cout <<"Element not found";

  return 0;
}