#include <iostream>
#include <vector>
using namespace std;

int minvalue(vector<int> arr)
{
  int min = arr[0];   
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}

int main()
{
  vector<int> arr = {60, 20, 50, 60, 80, 90};

  int result = minvalue(arr);

  cout << "minimum element of this array : " << result << endl;
}

//   int minimum = arr[0];            //int minimum = INT_MAX  (+infty)
//   for(int i = 0 ; i<5 ;i++){
//   minimum = min(arr[i], minimum);
//   }
//   return minimum;