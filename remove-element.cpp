#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{

  int k = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] != val)
    {
      nums[k] = nums[i];
      k++;
    }
  }
  return k;
}

int main()
{
  vector<int> nums = {5,8,9,8,3,8};
  int val = 8;  

  int result = removeElement(nums, val);

  for(int i = 0; i < result; i++)
  {
    cout << nums[i] << " ";
  }
}