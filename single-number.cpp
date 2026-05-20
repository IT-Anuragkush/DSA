#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
  int ans = 0;

  for (int val : nums)
  {
    ans = ans ^ val;
  }
  return ans;
}
// int singleNumber(vector<int> &nums)
// {
//   for (int i = 0; i < nums.size(); i++)
//   {
//     int count = 0;

//     for (int j = 0; j < nums.size(); j++)
//     {
//       if (nums[i] == nums[j])
//       {
//         count++;
//       }
//     }

//     if (count == 1)
//     {
//       return nums[i];
//     }
//   }

//   return -1;
// }
int main()
{
  vector<int> arr = {4, 1, 2, 1, 2};

  int result = singleNumber(arr);

  cout << result << endl;
}
