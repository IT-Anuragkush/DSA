#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
  vector<int> temp;

  for(int i = 0; i < arr1.size(); i++)
  {
    temp.push_back(arr1[i]);
  }
  for(int j = 0; j < arr2.size(); j++)
  {
    temp.push_back(arr2[j]);
  }
  sort( temp.begin(), temp.end());
  
  return temp;
}

int main(){
  vector<int> arr1 = {1, 2, 3};
  vector<int> arr2 = {2, 5, 6};

  vector<int> sortedArray = merge(arr1, arr2);

  for(int X : sortedArray)
  {
    cout << X << " ";
  }
}