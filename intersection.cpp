#include <iostream>
#include <vector>
using namespace std;
void intersectionArray(vector<int> arr1, vector<int> arr2)
{
  for (int i = 0; i < arr1.size(); i++)
  {
    for (int j = 0; j < arr2.size(); j++)
    {
      if (arr1[i] == arr2[j])
      {
        cout<< arr1[i] << " ";
      }
    }
  }
}
int main()
{
  vector<int> arr1 = {10, 50, 60, 80, 90, 40};
  vector<int> arr2 = {20, 50, 90, 80, 70};

  intersectionArray(arr1, arr2);
}