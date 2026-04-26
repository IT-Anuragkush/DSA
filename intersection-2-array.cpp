// intersection of two array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
  sort(nums1.begin(), nums1.end());
  sort(nums2.begin(), nums2.end());

  vector<int> ans;   // vector<int> temp;
  
  int i = 0;
  int j = 0;
  while( i < nums1.size() && j < nums2.size() )
  {
    // if we want to print unique value in ans vector
    if( i > 0 && nums1[i] == nums1[i-1] )
    {
      i++;
      continue;
    }
    if( j > 0 && nums2[j] == nums2[j-1] )
    {
      j++;
      continue;
    }

    // common values of both arr
    if( nums1[i] == nums2[j] )
    {
      ans.push_back(nums1[i]);   // ans.push_back(nums2[j]);
      i++;
      j++;
    }
    else if( nums1[i] < nums2[j] )
    {
      i++;
    }
    else{
      j++;
    }
  }
  return ans;
}

int main(){
  vector<int> nums1 = {4,9,5,9};       // both array is not sorted
  vector<int> nums2 = {9,4,9,8,4};

  vector<int> res = intersection( nums1, nums2);

  for( int x : res )
  {
    cout << x << " ";
  }
}