#include <iostream>
#include <vector>
using namespace std;

int secondMax(vector<int> &arr)
{
  int firstmx = arr[0];    //int firstmx = -1;
  int secondmx = arr[0];   //int firstmx = -1;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > firstmx)
    {
      secondmx = firstmx;
      firstmx = arr[i];
    }
    else if (arr[i] > secondmx && arr[i] != firstmx)
    {
      secondmx = arr[i];
    }
  }
  return secondmx;
}
int main()
{
  vector<int> arr = {10, 550, 90, 30, 40, 500, 600};

  cout << secondMax(arr);
}


// int secondMax(vector<int> &arr)
// {
//   int first = INT_MIN, second = INT_MIN;

//   for (int x : arr)
//   {
//     if (x > first)
//     {
//       second = first;
//       first = x;
//     }
//     else if (x > second && x != first)
//     {
//       second = x;
//     }
//   }

//   if (second == INT_MIN)
//     return -1; // no second max
//   return second;
// }
