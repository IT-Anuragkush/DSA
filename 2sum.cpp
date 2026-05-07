#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

  vector<int> ans;

  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] + nums[j] == target)
      {
        ans = {i, j};
      }
    }
  }
  return ans;
}
int main()
{
  vector<int> nums = {5, 8, 9, 3, 5};
  int target = 11;

  vector<int> result = twoSum(nums, target);

  for(int x : result)
  {
    cout << x << " ";
  }
}