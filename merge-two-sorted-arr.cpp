#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> merge(vector<int> &nums1, vector<int> &nums2)
  {
    vector<int> nums3;

    int i = 0;
    int j = 0;
    // int k = 0;

    while (i < nums1.size() && j < nums2.size())
    {
      if( nums1[i] <= nums2[j])
      {
        nums3.push_back(nums1[i]);  // nums[k] = nums[i]
        // k++;
        i++;
      }
      else
      {
        nums3.push_back(nums2[j]);
        // k++;
        j++;
      }
    }
    if( i < nums1.size())
    {
      while( i < nums1.size())
      {
        nums3.push_back(nums1[i]);
        // k++;
        i++;
      }
    }
    if( j < nums2.size())
    {
      while( j < nums2.size())
      {
        nums3.push_back(nums2[j]);
        // k++;
        j++;
      }
    } 
    return nums3;
  }
};

int main()
{
  vector<int> nums1 = {1, 2, 3};
  vector<int> nums2 = {2, 5, 6};

  Solution s;
  vector<int> res = s.merge(nums1, nums2);

  for(int x : res)
  {
    cout << x << " ";
  }
}