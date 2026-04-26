#include <iostream>
#include <vector>
using namespace std;

int maxivalue(vector<int> arr)
{
  int max = arr[0];
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int main()
{
  vector<int> arr = {20, 20, 50, 60, 80, 90};

  int result = maxivalue(arr);

  cout << "maximum element of this array : " << result << endl;
}

// int maximum = arr[0];       // maximum = INT_MIN     (-INFINITY)
//   for(int i = 0 ; i<5 ;i++){
//   maximum = max(arr[i], maximum);
//   }
//   return maximum;