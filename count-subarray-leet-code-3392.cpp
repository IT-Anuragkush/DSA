#include <iostream>
#include <vector>
using namespace std;

int countSubarrays(vector<int> &arr)
{
  int count = 0;

  for(int i = 1; i < arr.size()-1; i++)
  {
    if( (arr[i-1] + arr[i+1]) * 2 == arr[i])
    {
      count++;
    }
  }
  return count;
}

int main()
{
  vector<int> arr = {1,2,1,4,1};

  int result = countSubarrays(arr);

  cout << result << endl;
}