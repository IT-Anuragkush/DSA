#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trackingWater(vector<int> &height)
{
  vector<int> leftSupport(height.size());
  vector<int> rightSupport(height.size());

  int maxHeight = -1;

  // fill left support
  for(int i = 0; i < height.size(); i++)
  {
    leftSupport[i] = maxHeight;
    if( height[i] > maxHeight)    // maxHeight = max(height[i], maxHeight);
    {
      maxHeight = height[i];
    }
  }

  maxHeight = -1;
  
  // fill right support
  for(int i = height.size()-1; i >= 0; i--)
  {
    rightSupport[i] = maxHeight;
    if( height[i] > maxHeight)    // maxHeight = max(height[i], maxHeight);
    {
      maxHeight = height[i];
    }
  }

  int totalWater = 0;
  // int water;

  for(int i = 0; i < height.size(); i++)
  {
    int water = min(leftSupport[i], rightSupport[i]) - height[i];
    if(water > 0 )
    {
      totalWater += water;
    }
  }

  return totalWater;
}
int main()
{
  vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

  cout << trackingWater(height);
}