// intersection of two sorted array

#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
  vector<int> ans;   // vector<int> temp;
  
  int i = 0;
  int j = 0;
  while( i < nums1.size() && j < nums2.size() )
  {
    // // if we want to print unique value in ans vector
    // if( i > 0 && nums1[i] == nums1[i-1] )
    // {
    //   i++;
    //   continue;
    // }
    // if( j > 0 && nums2[j] == nums2[j-1] )
    // {
    //   j++;
    //   continue;
    // }

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
  vector<int> nums1 = {1, 2, 2, 3, 4};   // both array is sorted
  vector<int> nums2 = {2, 2, 4, 6, 7, 8};

  vector<int> res = intersection( nums1, nums2);

  for( int x : res )
  {
    cout << x << " ";
  }
}