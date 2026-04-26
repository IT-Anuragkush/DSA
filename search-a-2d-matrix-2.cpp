// read this question in leet code
#include <iostream>
#include <vector>
using namespace std;

bool searchMtrix(vector<vector<int>> &matrix, int target)
{
  int rowSize = matrix.size();
  int colSize = matrix[0].size();

  int r = 0;
  int c = colSize - 1;

  while( r < rowSize && c >= 0 )
  {
    if(matrix[r][c] == target)
    {
      return true;
    }
    else if( matrix[r][c] < target)
    {
      r++;
    }
    else{
      c--;
    }
  }
  return false;
}

int main()
{
  vector<vector<int>> matrix = { {1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22},
                       {10,13,14,17,24}, {18,21,23,26,30} };
  
  int target = 5;

  if(searchMtrix(matrix, target))
  {
    cout << "target found";
  }
  else{
    cout << "target not found";
  }
}