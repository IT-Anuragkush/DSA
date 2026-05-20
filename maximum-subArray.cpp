#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void maxSubArray(vector<int> &arr)
{
  int maxSum = 0;

  for (int st = 0; st < arr.size(); st++)
  {
    int currSum = 0;

    for (int end = st; end < arr.size(); end++)
    {
      currSum = currSum + arr[end];

      maxSum = max(maxSum, currSum);
    }
  }

  cout << "maximum subArray : " << maxSum << endl;
}

int main()
{
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  maxSubArray(arr);
}