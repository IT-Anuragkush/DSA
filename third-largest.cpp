#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int thirdlargest(vector<int> &arr)
{

  int first = -1;
  int second = -1;
  int third = -1;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > first)
    {
      third = second;
      second = first;
      first = arr[i];
    }
    else if (arr[i] > second && arr[i] != first)
    {
      third = second;
      second = arr[i];
    }
    else if (arr[i] > third && arr[i] != first && arr[i] != second)
    {
      third = arr[i];
    }
  }
  return third;
}

int main()
{
  vector<int> arr = {20, 50, 90, 50, 60, 90, 40, 80}; // third largest 70

  cout << thirdlargest(arr);
}

// int n = arr.size();

//   sort(arr.begin(), arr.end());

//   return arr[n-3];