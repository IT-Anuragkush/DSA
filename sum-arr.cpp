#include <iostream>
#include <vector>
using namespace std;

int sumArray(vector<int> arr)
{
  int sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    sum = sum + arr[i];
  }
  return sum;
}
int main()
{
  vector<int> arr = {20,50,60,80,90,70};

  int result = sumArray(arr);

  cout << "sum of all element of the array : " << result;

  return 0;
}