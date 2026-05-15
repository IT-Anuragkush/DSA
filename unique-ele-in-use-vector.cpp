// print unique element

#include <iostream>
#include <vector>
using namespace std;

void uniqueElement(vector<int> &arr)
{

  for (int i = 0; i < arr.size(); i++)
  {
    int count = 0;
    for (int j = 0; j < arr.size(); j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count == 1)
    {
      cout << arr[i] << " ";
    }
  }
}

int main()
{
  vector<int> arr = {2, 5, 6, 5, 8, 8};

  uniqueElement(arr);

  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cout << arr[i] << " ";
  // }
}